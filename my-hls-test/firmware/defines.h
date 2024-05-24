#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 28
#define N_INPUT_2_1 28
#define N_INPUT_3_1 1
#define OUT_HEIGHT_2 26
#define OUT_WIDTH_2 26
#define N_FILT_2 8
#define OUT_HEIGHT_2 26
#define OUT_WIDTH_2 26
#define N_FILT_2 8
#define OUT_HEIGHT_4 13
#define OUT_WIDTH_4 13
#define N_FILT_4 8
#define OUT_HEIGHT_5 11
#define OUT_WIDTH_5 11
#define N_FILT_5 16
#define OUT_HEIGHT_5 11
#define OUT_WIDTH_5 11
#define N_FILT_5 16
#define OUT_HEIGHT_7 5
#define OUT_WIDTH_7 5
#define N_FILT_7 16
#define N_SIZE_0_8 400
#define N_LAYER_9 64
#define N_LAYER_9 64
#define N_LAYER_11 10
#define N_LAYER_11 10

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> layer3_t;
typedef ap_fixed<18,8> conv2d_relu_table_t;
typedef ap_fixed<16,6> layer4_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,6> layer6_t;
typedef ap_fixed<18,8> conv2d_1_relu_table_t;
typedef ap_fixed<16,6> layer7_t;
typedef ap_fixed<16,6> layer9_t;
typedef ap_uint<1> layer9_index;
typedef ap_fixed<16,6> layer10_t;
typedef ap_fixed<18,8> dense_relu_table_t;
typedef ap_fixed<16,6> layer11_t;
typedef ap_uint<1> layer11_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> dense_1_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> dense_1_softmax_inv_table_t;

#endif
