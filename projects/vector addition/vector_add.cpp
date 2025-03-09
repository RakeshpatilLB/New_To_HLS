#include "vector_add.h"

void vector_add(data_t a[SIZE], data_t b[SIZE], data_t c[SIZE]) {
    /*These three pragmas specify that arrays a, b, and c should be implemented using a standard RAM interface. 
    This creates memory ports that can be accessed by external logic.*/
    #pragma HLS INTERFACE ap_memory port=a
    #pragma HLS INTERFACE ap_memory port=b
    #pragma HLS INTERFACE ap_memory port=c
    #pragma HLS INTERFACE ap_ctrl_hs port=return

    for (int i = 0; i < SIZE; i++) {
        #pragma HLS PIPELINE
        c[i] = a[i] + b[i];
    }
}
