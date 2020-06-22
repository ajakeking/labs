/**
 * Author: Jake King
 *         jake.king@huskers.unl.edu
 * Collaboration with Nick Aldridge
 * Date: 2020/06/11
 * Hack 2.0
 * This program calculates the distance between two user entered locations
 * on a longitude and latitude based coordinate system. Then is is converted
 * into kilometers using the formula:
 *
 */
 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>

 int
 main (int argc, char const **argv)
 {

   double initialLatitudeOrigin, initialLongitudeOrigin,
     initialLatitudeDestination, initialLongitudeDestination, latitudeOrigin,
     longitudeOrigin, latitudeDestination, longitudeDestination,
     distanceBetween, longDistanceBetween, radians;

   int radius = 6371; //radius given in documenataion

   radians = M_PI * (1/180.0); //conversion from degrees to radians

/** after uploading the grader didn't like the comma separated version so I
 *  changed the code to have two separate lines of entry for both origin
 *  and destination
 */
   printf ("Enter the Origin latitude:");
   scanf ("%lf", &initialLatitudeOrigin);
   printf ("Enter the Origin longitude:");
   scanf ("%lf", &initialLongitudeOrigin);

   printf ("Enter the Destination latitude:");
   scanf ("%lf", &initialLatitudeDestination);
   printf ("Enter the Destination longitude:");
   scanf ("%lf", &initialLongitudeDestination);
//conversions from degrees to radians for distance formula
   latitudeOrigin = initialLatitudeOrigin * radians;
   longitudeOrigin = initialLongitudeOrigin * radians;
   latitudeDestination = initialLatitudeDestination * radians;
   longitudeDestination = initialLongitudeDestination * radians;
   longDistanceBetween = longitudeDestination - longitudeOrigin;

// distance=arccos(sin(phi1)sin(phi2)+cos(phi1)cos(phi2)cos(delta))*R
   distanceBetween =
     (acos ((sin (latitudeOrigin) * sin (latitudeDestination)) +
 	    (cos (latitudeOrigin) * cos (latitudeDestination) *
 	     cos (longDistanceBetween)))) * radius;

// output from running program
   printf ("\nLocation Distance\n");
   printf ("===================\n");
   printf ("Origin:      (%lf, %lf)\n", initialLatitudeOrigin,
 	  initialLongitudeOrigin);
   printf ("Destination: (%lf, %lf)\n", initialLatitudeDestination,
 	  initialLongitudeDestination);
   printf ("AirDistance is %lf km\n", distanceBetween);

   return 0;
 }
