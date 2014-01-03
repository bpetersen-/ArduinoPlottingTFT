/**	Arduino Math Plotting TFT Library
 *
 *	An Oscilloscope Library for Ardunio Mega ADK and Seeed Studio 2.8" TFT Touch Screen.
 *
 *  Copyright (c) 2014 by Bradley Petersen <bpetersen@ieee.org>
 *
 *  The MIT License (MIT)
 *
 *  Copyright (c) 2014 Bradley Petersen
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of
 *  this software and associated documentation files (the "Software"), to deal in
 *  the Software without restriction, including without limitation the rights to
 *  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 *  the Software, and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 *  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 *  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 *  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 *  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

// !!!!!!!!!!!!!!!!!!NOT FINISHED!!!!!!!!!!!!!

/***********************************************
 *  HEADER FILES
 ***********************************************/
 #include <TFT/TFT.h>
 #include "plot.h"		// Math Plotting Library

/***********************************************
 *  BASIC PLOTTING FUNCTIONS
 ***********************************************/
/**
* Labels the x-axis with the string.
* @param display Displays/Hides x-label.Default value = SHOW.
* @param label Defines string text that labels the x-axis.
* @param fontsize Defines size of font. Default value = 1.
* @param posX Sets the x-position of label. Default value = 1.
* @param posY Sets the y-position of label. Default value = 1.
*/
void PLOT::xLabel(char* label, int posX = 0, int posY = 0, int fontsize = 1, unsigned int color, int display = SHOW);

/**
* Labels the y-axis with the string.
* @param display Displays/Hides y-label.Default value = SHOW.
* @param label Defines string text that labels the x-axis.
* @param fontsize Defines size of font. Default value = 1.
* @param posX Sets the x-position of label. Default value = 1.
* @param posY Sets the y-position of label. Default value = 1.
*/ 
void PLOT::yLabel(int display = SHOW, char* label, int fontsize = 1, int posX = 0, int posY = 0); 

/**
* Displays/Sets the Title of Graph (String).
* @param label Defines string text that labels the x-axis.
* @param fontsize Defines size of font. Default value = 1.
* @param posX Sets the x-position of label. Default value = 1.
* @param posY Sets the y-position of label. Default value = 1.
* @param display Displays/Hides y-label.Default value = SHOW.
*/ 
void PLOT::title(char* label, int fontsize = 1, int posX = 0, int posY = 0, int display = SHOW, );

/**
* Sets the attributes of x-axis.
* @param minX Defines minimum value for smallest tick mark.
* @param maxX Defines maximum value for largest tick mark.
* @param posY Sets the y-position of x-axis. Default value = 1.
* @param numTicks Defines color of x-axis.Default value = SHOW.
* @param color Defines color of x-axis.Default value = SHOW.
* @param display Displays/Hides x-axis.Default value = SHOW.
*/ 
void PLOT::xAxis(int minX, int maxX, int posY = 20, unsigned int color = BLACK, int display = SHOW);

/**
* Sets the attributes of y-axis.
* @param minY Defines minimum value for smallest tick mark.
* @param maxY Defines maximum value for largest tick mark.
* @param posX Sets the x-position of y-axis. Default value = 1.
* @param color Defines color of y-axis.Default value = SHOW.
* @param display Displays/Hides y-axis.Default value = SHOW.
*/ 
void PLOT::yAxis(int minY, int maxY, int posX = 20, unsigned int color = BLACK, int display = SHOW);
		
/**
* Displays/Sets color of x-axis minor ticks.
* @param color Defines color of x-axis minor ticks.
* @param display Displays/Hides x-axis minor ticks.Default value = SHOW.
*/ 
void PLOT::xMinorTick(unsigned int color, int display = SHOW);
/**
* Displays/Sets color of y-axis minor ticks.
* @param color Defines color of y-axis minor ticks.
* @param display Displays/Hides y-axis minor ticks.Default value = SHOW.
*/ 
void PLOT::yMinorTick(unsigned int color, int display = SHOW);

/**
* Displays/Sets color of x-axis major ticks.
* @param color Defines color of x-axis major ticks.
* @param display Displays/Hides x-axis major ticks.Default value = SHOW.
*/ 
void PLOT::xMajorTick(unsigned int color, int display = SHOW);
/**
* Displays/Sets color of y-axis major ticks.
* @param color Defines color of y-axis major ticks.
* @param display Displays/Hides y-axis major ticks.Default value = SHOW.
*/ 
void PLOT::yMajorTick(unsigned int color, int display = SHOW);

/***********************************************
 *  2D LINE PLOTS
 ***********************************************/

/**
* Creates a 2-D line plot of the data in Y versus the corresponding values in X. X and Y must be same-size vectors.
* @param x Independent Variable Vector.
* @param y Dependent Variable Vector.
* @param style Defines style of XY-Graph.
*/ 
void PLOT::plot(int* x, int* y, char* style); 				// Graph 2-D data with linear scales for both axes
/**
* Creates a contour plot of Z using X and Y to determine the x- and y-axis limits..
* @param x Vector.
* @param y Vector.
* @param z Array.
* @param style Defines style of contour graph.
*/ 
void PLOT::contour(int* x, int* y, int* z, char* style); 	// Graph 2-D data with linear scales for both axes
/**
* Creates a 2-D line plot of the data in Y versus the corresponding values in X. The X & Y axes are logarmithmic.
* @param x Vector.
* @param y Vector.
* @param style Defines style of XY-graph.
*/ 
void PLOT::loglog(int* x, int* y, char* style);			// Graph with logarithmic scales for both axes
/**
* Creates a 2-D line plot of the data in Y versus the corresponding values in X. The x-axis is logarmithmic while y-axis is linear.
* @param x Vector.
* @param y Vector.
* @param style Defines style of XY-graph.
*/ 
void PLOT::semilogX(int* x, int* y, char* style);			// Graph with a logarithmic scale for the x and a linear scale for y
/**
* Creates a 2-D line plot of the data in Y versus the corresponding values in X. The y-axis is logarmithmic while x-axis is linear.
* @param x Vector.
* @param y Vector.
* @param style Defines style of XY-graph.
*/ 
void PLOT::semilogY(int* x, int* y, char* style);			// Graph with a logarithmic scale for the y and a linear scale for x

/***********************************************
 *  2D LINE PLOTS
 ***********************************************/
 /**
		// *** BAR GRAPHS *** 
void PLOT::bar(int* x, int* Y, char* style); 	// bar(x,Y,LineSpec) - Draws Y bar at point x
void PLOT::barh(int* x, int* y, char* style); 				// Graph 2-D data with linear scales for both axes
void PLOT::hist(int* data, int nbins);
void PLOT::errorbar(int* x, int* y, int* L, int* U, char* style); // XY-Graph. L is distance under and U is distance above
void PLOT::stem(int* x, int* y, char* style);

// *** DIRECTIONAL GRAPHS ***
void PLOT::quiver(int* x, int* y, int* u,int* v); //(x,y) points to (u,v)

// *** RADIAL GRAPHS ***
void PLOT::polar(int* theta, int* rho, char* style); //theta = angle, rho = radius

// *** Complex ***
void PLOT::complex(int* theta, int* rho, char* style); //theta = angle, rho = radius

// *** SCATTER GRAPHS ***
void PLOT::scatter(int* x, int* y, char* style); //theta = angle, rho = radius

// Other
void PLOT::bgcolor(unsigned int color);					// Changes background color of plot
*/

PLOT Plot=PLOT();



