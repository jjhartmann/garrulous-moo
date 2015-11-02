#include "s3e.h"
#include "IwDebug.h"
#include "Iw2D.h"

// Main entry point for the application
int main()
{
    //Initialize graphics system(s)
    Iw2DInit();

    // Setup the input system


    // Create an image from file
    CIw2DImage *image = Iw2DCreateImage("textures/gem1.png");

    // Loop forever, until the user or the OS performs some action to quit the app
    while (!s3eDeviceCheckQuitRequest())
    {
        // CLear the drawing surface
        Iw2DSurfaceClear(0xff000000);

        // Draw the image
        Iw2DDrawImage(image, CIwFVec2::g_Zero);

        // Show the drawing surface
        Iw2DSurfaceShow();

        // Sleep for 0ms to allow the OS to process events etc.
        s3eDeviceYield(0);
    }

    //Terminate modules being used
    delete image;
    Iw2DTerminate();

    // Return
    return 0;
}