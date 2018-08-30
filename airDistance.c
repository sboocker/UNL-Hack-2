/**

Created by:
Sam Boocker

Collaborated with:
Amur Al Harthi

**/

#include <stdio.h>
#include <math.h>

int main()

{
  double degLatitudeOne;
  double degLongitudeOne;
  double degLatitudeTwo;
  double degLongitudeTwo;
  double radiusOfEarth = 6371.0;

  printf("Please enter a latitude for the originating location:\n");
  scanf("%lf", &degLatitudeOne);

  double radLatitudeOne = (degLatitudeOne * (M_PI/180.0));

  printf("Please enter the corresponding longitude:\n");
  scanf("%lf", &degLongitudeOne);

  double radLongitudeOne = (degLongitudeOne * (M_PI/180.0));

  printf("Please enter a latitude for the destination:\n");
  scanf("%lf", &degLatitudeTwo);

  double radLatitudeTwo = (degLatitudeTwo * (M_PI/180.0));

  printf("Please enter the corresponding longitude:\n");
  scanf("%lf", &degLongitudeTwo);

  double radLongitudeTwo = (degLongitudeTwo * (M_PI/180.0));

  double diffLongitudes = (radLongitudeTwo - radLongitudeOne);
  double consineComponent = (cos(radLatitudeOne) * cos(radLatitudeTwo) *
                             cos(diffLongitudes));
  double sineComponent = (sin(radLatitudeOne) * sin(radLatitudeTwo));

  double airDistance = (acos(sineComponent + (consineComponent)) * radiusOfEarth);

  printf("Location Distance:\n"
         "========================\n"
          "Origin:      (%.6lf, %.6lf)\n"
          "Destination: (%.6lf, %.6lf)\n"
          "Air distance is %.6lf kms\n", degLatitudeOne, degLongitudeOne,
          degLatitudeTwo, degLongitudeTwo, airDistance);
}
