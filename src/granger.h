#ifndef _GRANGER_H_
#define _GRANGER_H_

void granger(int rows, int cols,
             const float * y, int p, 
             float * fStats, float * pValues,
             const char * kernelSrc);

void grangerxy(int rows,
               int colsx, const float * x,
               int colsy, const float * y,
               int p,
               float * fStats,
               float * pValues,
               const char * kernelSrc);

#endif /* _GRANGER_H_ */
