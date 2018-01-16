/*
 * Node1.cpp
 *
 * Created: 16/01/2018 15:13:47
 * Author : martin
 */ 


#include "sam.h"

#include "library.h"

int main(void)
{
    /* Initialize the SAM system */
    SystemInit();

    /* Replace with your application code */
    while (1) 
    {
		foo(5);
		int x = myfunc();
    }
}
