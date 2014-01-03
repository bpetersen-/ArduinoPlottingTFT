/**	Arduino Math Plot TFT Library Header 
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
 
 /**
 * @author      Bradley Petersen <bpetersen@ieee.org>
 * @version     1.0                 (current version number of program)
 * @since       2014-01-03          (the version of the package this class was first added to)
 *
 *
 */

#ifndef PLOT_h
#define PLOT_h

/***************************************
*	HEADER FILES
***************************************/

#include <Arduino.h>
#include <avr/pgmspace.h>
#include <colors.h>
#include <settings.h>
#include <TFT/TFT.h>

class PLOT
{
	public:
		void init(unsigned int color);
		// BASIC FUNCTIONS
		// LABELS
		void xLabel(char* label, int posX, int posY, int fontsize, int fontdir, unsigned int color); 
		void yLabel(char* label, int posX, int posY, int fontsize, int fontdir, unsigned int color); 
		
		// GRAPH TITLE
		void title(char* label, int fontsize, int posX, int posY, int display);

		// Axis 
		void xAxis(int minX, int maxX, int posY, unsigned int color, int display);
		void yAxis(int minY, int maxY, int posX, unsigned int color, int display);
		
		// --- AXES TICKS ---
		// Axes Minor Ticks
		void MinorTick(char axis, unsigned int color, int display);
		
		// Axes Major Ticks
		void MajorTick(char axis, unsigned int color, int display);
		
		// *** 2D LINE GRAPHS *** 
		void plot(int y[MAX_Y], unsigned int color, char style); 				// Graph 2-D data with linear scales for both axes
		void contour(int* x, int* y, int* z, char* style); 	// Graph 2-D data with linear scales for both axes
		void loglog(int* x, int* y, char* style);			// Graph with logarithmic scales for both axes
		void semilogX(int* x, int* y, char* style);			// Graph with a logarithmic scale for the x and a linear scale for y
		void semilogY(int* x, int* y, char* style);			// Graph with a logarithmic scale for the y and a linear scale for x
/**
		// *** BAR GRAPHS *** 
		void bar(int* x, int* Y, char* style); 	// bar(x,Y,LineSpec) - Draws Y bar at point x
		void barh(int* x, int* y, char* style); 				// Graph 2-D data with linear scales for both axes
		void hist(int* data, int nbins);
		void errorbar(int* x, int* y, int* L, int* U, char* style); // XY-Graph. L is distance under and U is distance above
		void stem(int* x, int* y, char* style);
		
		// *** AREA GRAPHS *** 
		
		// *** DIRECTIONAL GRAPHS ***
		void quiver(int* x, int* y, int* u,int* v); //(x,y) points to (u,v)
		
		// *** RADIAL GRAPHS ***
		void polar(int* theta, int* rho, char* style); //theta = angle, rho = radius
		
		// *** Complex ***
		void complex(int* theta, int* rho, char* style); //theta = angle, rho = radius
		
		// *** SCATTER GRAPHS ***
		void scatter(int* x, int* y, char* style); //theta = angle, rho = radius
*/
		// Other
		void bgColor(unsigned int color);					// Changes background color of plot
		unsigned int GetStyle(unsigned int fgcolor, char style);
		void Console(String cmd);
		void ConsoleFunctionsFilter(String cmdFunc,String cmdInput);
		void help(String cmdInput);

/**
*http://www.mathworks.com/help/matlab/creating_plots/figures-plots-and-graphs.html#btjs9s4-1
*/
	private:
		unsigned int _bgcolor;
};

class CONSOLE
{
	public:
	
};

extern CONSOLE Console;
extern PLOT Plot;


#endif
