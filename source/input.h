
#if !defined(STAGE_INPUT_H)
#define STAGE_INPUT_H

#include "s3ePointer.h"

#define MAX_TOUCHES 10

#pragma once
class Input
{
public:
    Input();
    ~Input();

    // Update
    void Update();

    // Reset
    void Reset();

    // Input touch event callbacks
    static void TouchButtonCB(s3ePointerEvent * event);
    static void TouchMotionCB(s3ePointerEvent * event);
    static void MultiTouchButtonCB(s3ePointerEvent * event);
    static void MultiTouchMotionCB(s3ePointerEvent * event);



    // Vars
    int m_X, m_Y;           // Touched position
    bool m_Touched;         // Touched status
    bool m_PrevTouched;     // Previous touched status

};

extern Input* g_pInput;

#endif