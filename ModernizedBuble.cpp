#include<stdio.h>

main()
 {
       int i, n, maxi, mini, j, k;
       float a[100], max, min, MX, MN, MR;
       
        printf("Vedit k-st elementiv masivu - ");
        scanf("%d",&n);
        
         for(i = 0; i < n; i++)
          {
               printf("Vvedit A[%d] - ",i);
               scanf("%f", &a[i]);
          }
          
           printf("\n Masiv A \n");
            for(i = 0; i < n; i++)
             printf("%6.2f", a[i]);
             k = n;
             j = -1;
         
          do
           {  
             j = j + 1; 
             
             if ((n - j) == 1 || n == j) break;
              
             max = a[j];
             min = a[j];
             mini = j;
             maxi = j;
             MX = a[n - 1];
             MN = a[j];
             
             printf("\n ------------------------------------------------ \n");
             printf("MAX = %6.2f, MIN = %6.2f, MINI = %d, MAXI = %d \n",max, min, mini, maxi);
            
             for(i = j; i < n; i++)
              {
                   if(max < a[i])
                    {
                          max = a[i];
                          maxi = i;
                    }
                    
                    if(min > a[i])
                     {
                           min = a[i];
                           mini = i;
                     }
              }
              
              printf("\n Max iz - %6.2f (in max = %6.2f)",a[maxi], max);
              printf("\n Min iz - %6.2f (in min = %6.2f)",a[mini], min);
              printf("\n J = %d, N = %d, MINI = %d, MAXI = %d", j, n, mini, maxi);
              printf("\n MX = %6.2f, MN = %6.2f", MX, MN);
               printf("\n Masiv na obrobci \n");
                for(i = j; i < n; i++)
                 printf("%6.2f", a[i]);
                 
                 if(maxi == j && mini == (n - 1))
                  {
                         MR = a[maxi];
                         a[maxi] = a[mini];
                         a[mini] = MR;
                  }
                   else
                    if(maxi == j)
                     {
                            a[n - 1] = a[maxi];
                            a[maxi] = MX;
                      
                            a[j] = a[mini];
                            a[mini] = MN;
                      }
                      else
                       if(mini == (n - 1))
                        {
                               a[j] = a[mini];
                               a[mini] = MN;
                               
                               a[n - 1] = a[maxi];
                               a[maxi] = MX;
                        }
                        else
                         {
                             if(mini != j)
                              {
                                   a[j] = a[mini];
                                   a[mini] = MN;
                              }
                             if(maxi != ( n - 1 ))
                              {
                                   a[n - 1] = a[maxi];
                                   a[maxi] = MX;
                              }
                          }
                    
                    
                 printf("\n Obroblenyj masiv \n");
                  for(i = j; i < n; i++)
                   printf("%6.2f", a[i]);
              
              n--;
           
           }while(n > 0 && j < n);
           
           printf("\n \n Vidsortovanyj masiv \n");
            for(i = 0; i < k; i++)
             printf("%6.2f", a[i]);
           
              scanf("%d",i);
 }
