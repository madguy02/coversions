#include<math.h>

struct ret
{
        double longm[100][100],latm[100][100];
        
};
struct ret col2mat(double longg[], double lat[], double i[]);
struct ret col2mat(double longg[], double lat[], double i[])
{
        struct ret value;
        
        int n = 1,m = 0,ndx;
        double pi=3.14;
        int sizeLong =size(longg); //function call
        
        for(ndx=0;ndx<sizeLong;ndx++)
        {
                if(i[ndx]>(pi/2))
                {
                        if(ndx==1)
                        {
                                value.longm[ndx][n]=longg[ndx];
                                value.latm[ndx][n]=lat[ndx];
                        }
                        else
                        {
                                if(longg[ndx]>longg[ndx-1])
                                {
                                        n=n+1;
                                        m=ndx-1;
                                        value.longm[ndx-m][n]=longg[ndx];
                                        value.latm[ndx-m][n]=lat[ndx];
                                }
                                else
                                {
                                        value.longm[ndx-m][n]=longg[ndx];
                                        value.latm[ndx-m][n]=lat[ndx];
                                }
                        }
                }
                else if(i[ndx]<(pi/2))
                {
                      if(ndx==1)
                        {
                                value.longm[ndx][n]=longg[ndx];
                                value.latm[ndx][n]=lat[ndx];
                        }  
                        else
                        {
                                if(longg[ndx]<longg[ndx-1])
                                {
                                        n=n+1;
                                        m=ndx-1;
                                        value.longm[ndx-m][n]=longg[ndx];
                                        value.latm[ndx-m][n]=lat[ndx];
                                }
                                else
                                {
                                        value.longm[ndx-m][n]=longg[ndx];
                                        value.latm[ndx-m][n]=lat[ndx];
                                }
                        }
                }
                else
                {
                        value.longm=longg;
                        value.latm=lat;
                }
                return value;
        }
}
