#include "s3e.h"
#include "IwDebug.h"
#include "Iw2D.h"
#include "input.h"

// Main entry point for the application
int main()
{
    //Initialize graphics system(s)
    Iw2DInit();

    // Setup the input system
    g_pInput = new Input();

    // Create an image from file
    CIw2DImage *image = Iw2DCreateImage("textures/gem1.png");
    CIwFVec2 image_position = CIwFVec2::g_Zero;

    // Loop forever, until the user or the OS performs some action to quit the app
    while (!s3eDeviceCheckQuitRequest())
    {
        // Update the input 
        g_pInput->Update();

        // CLear the drawing surface
        Iw2DSurfaceClear(0xff000000);

        // Draw the image
        Iw2DDrawImage(image, image_position);

        // Check for user tap
        if (!g_pInput->m_Touched && g_pInput->m_PrevTouched)
        {
            // Move image
            image_position.x = static_cast<float>(g_pInput->m_X) - image->GetWidth()/2;
            image_position.y = static_cast<float>(g_pInput->m_Y) - image->GetHeight()/2;

            // Reset input
            g_pInput->Reset();
        }

        // Show the drawing surface
        Iw2DSurfaceShow();

        // Sleep for 0ms to allow the OS to process events etc.
        s3eDeviceYield(0);
    }

    //Terminate modules being used
    delete g_pInput;
    delete image;
    Iw2DTerminate();

    // Return
    return 0;
}