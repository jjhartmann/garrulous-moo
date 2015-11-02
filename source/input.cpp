#include "input.h"

// Global Pointer
Input *g_pInput = 0;

Input::Input()
{
}


Input::~Input()
{
}

void Input::TouchButtonCB(s3ePointerEvent * event)
{
    g_pInput->m_PrevTouched = g_pInput->m_PrevTouched;
    g_pInput->m_Touched = event->m_Pressed != 0;
    g_pInput->m_X = event->m_x;
    g_pInput->m_Y = event->m_y;
}

void Input::TouchMotionCB(s3ePointerEvent * event)
{
    g_pInput->m_X = event->m_x;
    g_pInput->m_Y = event->m_y;
}

void Input::MultiTouchButtonCB(s3ePointerEvent * event)
{
    g_pInput->m_PrevTouched = g_pInput->m_Touched;
    g_pInput->m_Touched = event->m_Pressed != 0;
    g_pInput->m_X = event->m_x;
    g_pInput->m_Y = event->m_y;
}

void Input::MultiTouchMotionCB(s3ePointerEvent *event)
{
    g_pInput->m_X = event->m_x;
    g_pInput->m_Y = event->m_y;
}
