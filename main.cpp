/* Praktikum iz mikrokontrolera Vezbe 1 Zadatak 3
 * Copyright (c) 2023 ETF
 * SPDX-License-Identifier: Apache-2.0
 */

// Obavezna biblioteka
#include "mbed.h"


// Vreme izmedju 2 uzastopne provere stanja dugmeta
#define PERIOD     2000
#define DUTY_CYCLE 0.25 // Ispunjenost periode, odgovara 25%


int main()
{
    // Instanciranje led
    DigitalOut led(LED1);

    while (true) {
        // Ukljuci diodu
        led = true;
        // Sacekaj vreme koje odgovara proizvodu ispunjenosti periode i vremenu periode
        wait_us(PERIOD * DUTY_CYCLE);
        // Iskljuci diodu
        led = false;
        // Sacekaj ostatak periode
        wait_us(PERIOD * (1 - DUTY_CYCLE));
    }
}

