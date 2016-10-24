//
//  main.c
//  6-3-2016 Simple Algorithms 15
//
//  Created by Chad Wiedemann on 6/3/16.
//  Copyright © 2016 TurnToTech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    //This is the section the prompts the user for the requested input
    int time1;
    int time2;
    printf("Please input time one: ");
    scanf("%d",&time1);
    printf("Please input time two: ");
    scanf("%d",&time2);
    
    //this section breaks out the seconds minutes and hours
    
    
    int seconds;
    seconds=time1%100;
    int minutes;
    //how the math works
    minutes=((time1%10000)-(time1%100))/100;
    int hours;
    hours=((time1%1000000)-(time1%10000))/10000;
    
    
    //this section converts minutes to seconds from the input
    int secondmin;
    secondmin=minutes*60;
    //printf("%d seconds represented by the minutes\n",secondmin);
    
    //this section converts hours to seconds from the input
    int secondhours;
    secondhours=hours*3600;
    //printf("%d seconds represented by the hours\n",secondhours);
    //this section computes the total time in seconds for time1
    int totaltimeinsecondstime1=seconds+secondmin+secondhours;
    //printf("%d total time in seconds for time 1\n\n\n",totaltimeinsecondstime1);
    //this section does all the same programing for the second number
    int seconds2;
    seconds2=time2%100;
    int minutes2;
    minutes2=((time2%10000)-(time2%100))/100;
    int hours2;
    hours2=((time2%1000000)-(time2%10000))/10000;
    //printf("%d seconds time two\n",seconds2);
    //printf("%d minutes time two\n",minutes2);
    //printf("%d hours time two\n",hours2);
    int secondmin2;
    secondmin2=minutes2*60;
    //printf("%d seconds represented by the minutes time two\n",secondmin2);
    int secondhours2;
    secondhours2=hours2*3600;
    //printf("%d seconds represented by the hours time two\n",secondhours2);
    int totaltimeinsecondstime2=seconds2+secondmin2+secondhours2;
    //printf("%d total time in seconds for time two\n\n\n",totaltimeinsecondstime2);
    //this section calculates the difference in seconds from time 1 to time 2
    int diffInSec=totaltimeinsecondstime1-totaltimeinsecondstime2;
    //printf("%d this is the difference in seconds\n\n",diffInSec);
    /*The result of this section will be used in the next section to build up the correct output for the user.  this section is kind of confusing.  it uses integer division and subtraction from the total difference determined in the last section to find the base ten nummbers required for the final output.  the next section will do the  final calculation and printf */
    int diffTensOfHours = diffInSec/36000;
    int diffAfterTensOfHours = diffInSec - (diffTensOfHours*36000);
    int diffShortHours = diffAfterTensOfHours/3600;
    int diffAfterShortHours = diffAfterTensOfHours-(diffShortHours*3600);
    int diffTensOfMinutes=diffAfterShortHours/600;
    int diffAfterTensOfMinutes=diffAfterShortHours-(diffTensOfMinutes*600);
    int diffShortMinutes=diffAfterTensOfMinutes/60;
    int diffAfterShortMinutes=diffAfterTensOfMinutes-(diffShortMinutes*60);
    int diffTensOfSeconds=diffAfterShortMinutes/10;
    int diffAfterTensOfSeconds=diffAfterShortMinutes-(diffTensOfSeconds*10);
    int timeDifference=diffTensOfHours*100000+diffShortHours*10000+diffTensOfMinutes*1000+diffShortMinutes*100+diffTensOfSeconds*10+diffAfterTensOfSeconds;
    printf("\nTime Difference: %d\n\n\n",timeDifference);
    return 0;
}
