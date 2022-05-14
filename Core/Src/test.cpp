/*
 * test.cpp
 *
 *  Created on: 14 maj 2022
 *      Author: marci
 */

#include "test.h"
#include "mainApp.h"

void mainApp()
{
    MainApp application;

    application.testLoop();
}

void MainApp::testLoop()
{
    while(1)
    {
        HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
        HAL_Delay(250);
        HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
        HAL_Delay(250);
    }
}
