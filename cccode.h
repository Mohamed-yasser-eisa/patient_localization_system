#pragma once
/**
 * Compute kernel between feature vector and support vector.
 * Kernel type: poly
 */
 namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:

/**
 * Predict class for features vector
 */
int predict(double *x) {
    double kernels[230] = { 0 };
    double decisions[15] = { 0 };
    int votes[6] = { 0 };
        kernels[0] = compute_kernel(x,   -74.0  , -54.0  , -90.0  , -53.0 );
        kernels[1] = compute_kernel(x,   -76.0  , -68.0  , -90.0  , -56.0 );
        kernels[2] = compute_kernel(x,   -73.0  , -57.0  , -70.0  , -64.0 );
        kernels[3] = compute_kernel(x,   -70.0  , -57.0  , -72.0  , -59.0 );
        kernels[4] = compute_kernel(x,   -62.0  , -55.0  , -90.0  , -49.0 );
        kernels[5] = compute_kernel(x,   -71.0  , -90.0  , -67.0  , -55.0 );
        kernels[6] = compute_kernel(x,   -90.0  , -59.0  , -90.0  , -90.0 );
        kernels[7] = compute_kernel(x,   -90.0  , -59.0  , -63.0  , -59.0 );
        kernels[8] = compute_kernel(x,   -90.0  , -48.0  , -56.0  , -50.0 );
        kernels[9] = compute_kernel(x,   -72.0  , -51.0  , -61.0  , -50.0 );
        kernels[10] = compute_kernel(x,   -71.0  , -51.0  , -61.0  , -49.0 );
        kernels[11] = compute_kernel(x,   -64.0  , -52.0  , -59.0  , -49.0 );
        kernels[12] = compute_kernel(x,   -68.0  , -49.0  , -66.0  , -48.0 );
        kernels[13] = compute_kernel(x,   -61.0  , -45.0  , -90.0  , -64.0 );
        kernels[14] = compute_kernel(x,   -62.0  , -45.0  , -90.0  , -67.0 );
        kernels[15] = compute_kernel(x,   -64.0  , -44.0  , -90.0  , -66.0 );
        kernels[16] = compute_kernel(x,   -62.0  , -41.0  , -90.0  , -64.0 );
        kernels[17] = compute_kernel(x,   -90.0  , -41.0  , -90.0  , -70.0 );
        kernels[18] = compute_kernel(x,   -64.0  , -47.0  , -90.0  , -90.0 );
        kernels[19] = compute_kernel(x,   -57.0  , -57.0  , -90.0  , -66.0 );
        kernels[20] = compute_kernel(x,   -59.0  , -41.0  , -90.0  , -90.0 );
        kernels[21] = compute_kernel(x,   -90.0  , -45.0  , -90.0  , -66.0 );
        kernels[22] = compute_kernel(x,   -58.0  , -46.0  , -90.0  , -90.0 );
        kernels[23] = compute_kernel(x,   -57.0  , -90.0  , -59.0  , -90.0 );
        kernels[24] = compute_kernel(x,   -57.0  , -47.0  , -60.0  , -62.0 );
        kernels[25] = compute_kernel(x,   -59.0  , -48.0  , -58.0  , -70.0 );
        kernels[26] = compute_kernel(x,   -52.0  , -48.0  , -90.0  , -64.0 );
        kernels[27] = compute_kernel(x,   -50.0  , -49.0  , -53.0  , -90.0 );
        kernels[28] = compute_kernel(x,   -52.0  , -47.0  , -90.0  , -64.0 );
        kernels[29] = compute_kernel(x,   -63.0  , -49.0  , -55.0  , -90.0 );
        kernels[30] = compute_kernel(x,   -52.0  , -47.0  , -56.0  , -65.0 );
        kernels[31] = compute_kernel(x,   -56.0  , -48.0  , -62.0  , -67.0 );
        kernels[32] = compute_kernel(x,   -55.0  , -48.0  , -59.0  , -66.0 );
        kernels[33] = compute_kernel(x,   -90.0  , -40.0  , -49.0  , -90.0 );
        kernels[34] = compute_kernel(x,   -90.0  , -45.0  , -52.0  , -61.0 );
        kernels[35] = compute_kernel(x,   -60.0  , -43.0  , -54.0  , -90.0 );
        kernels[36] = compute_kernel(x,   -60.0  , -39.0  , -90.0  , -90.0 );
        kernels[37] = compute_kernel(x,   -90.0  , -40.0  , -90.0  , -90.0 );
        kernels[38] = compute_kernel(x,   -59.0  , -45.0  , -90.0  , -90.0 );
        kernels[39] = compute_kernel(x,   -57.0  , -47.0  , -90.0  , -68.0 );
        kernels[40] = compute_kernel(x,   -57.0  , -49.0  , -51.0  , -70.0 );
        kernels[41] = compute_kernel(x,   -64.0  , -47.0  , -57.0  , -90.0 );
        kernels[42] = compute_kernel(x,   -64.0  , -36.0  , -54.0  , -90.0 );
        kernels[43] = compute_kernel(x,   -61.0  , -43.0  , -52.0  , -65.0 );
        kernels[44] = compute_kernel(x,   -62.0  , -44.0  , -54.0  , -65.0 );
        kernels[45] = compute_kernel(x,   -65.0  , -43.0  , -58.0  , -69.0 );
        kernels[46] = compute_kernel(x,   -66.0  , -48.0  , -56.0  , -71.0 );
        kernels[47] = compute_kernel(x,   -62.0  , -49.0  , -63.0  , -90.0 );
        kernels[48] = compute_kernel(x,   -63.0  , -47.0  , -55.0  , -90.0 );
        kernels[49] = compute_kernel(x,   -65.0  , -49.0  , -90.0  , -67.0 );
        kernels[50] = compute_kernel(x,   -58.0  , -44.0  , -57.0  , -61.0 );
        kernels[51] = compute_kernel(x,   -61.0  , -47.0  , -54.0  , -90.0 );
        kernels[52] = compute_kernel(x,   -90.0  , -45.0  , -55.0  , -67.0 );
        kernels[53] = compute_kernel(x,   -61.0  , -47.0  , -56.0  , -63.0 );
        kernels[54] = compute_kernel(x,   -70.0  , -52.0  , -55.0  , -66.0 );
        kernels[55] = compute_kernel(x,   -61.0  , -46.0  , -52.0  , -90.0 );
        kernels[56] = compute_kernel(x,   -90.0  , -47.0  , -54.0  , -90.0 );
        kernels[57] = compute_kernel(x,   -90.0  , -43.0  , -54.0  , -73.0 );
        kernels[58] = compute_kernel(x,   -72.0  , -53.0  , -54.0  , -66.0 );
        kernels[59] = compute_kernel(x,   -90.0  , -49.0  , -51.0  , -68.0 );
        kernels[60] = compute_kernel(x,   -90.0  , -49.0  , -50.0  , -90.0 );
        kernels[61] = compute_kernel(x,   -90.0  , -49.0  , -50.0  , -68.0 );
        kernels[62] = compute_kernel(x,   -68.0  , -46.0  , -51.0  , -61.0 );
        kernels[63] = compute_kernel(x,   -61.0  , -49.0  , -90.0  , -64.0 );
        kernels[64] = compute_kernel(x,   -63.0  , -49.0  , -55.0  , -61.0 );
        kernels[65] = compute_kernel(x,   -58.0  , -44.0  , -55.0  , -60.0 );
        kernels[66] = compute_kernel(x,   -61.0  , -46.0  , -49.0  , -65.0 );
        kernels[67] = compute_kernel(x,   -64.0  , -54.0  , -53.0  , -69.0 );
        kernels[68] = compute_kernel(x,   -67.0  , -47.0  , -90.0  , -90.0 );
        kernels[69] = compute_kernel(x,   -69.0  , -51.0  , -50.0  , -69.0 );
        kernels[70] = compute_kernel(x,   -68.0  , -53.0  , -90.0  , -71.0 );
        kernels[71] = compute_kernel(x,   -65.0  , -53.0  , -54.0  , -90.0 );
        kernels[72] = compute_kernel(x,   -69.0  , -52.0  , -50.0  , -70.0 );
        kernels[73] = compute_kernel(x,   -68.0  , -90.0  , -90.0  , -65.0 );
        kernels[74] = compute_kernel(x,   -90.0  , -90.0  , -59.0  , -71.0 );
        kernels[75] = compute_kernel(x,   -90.0  , -58.0  , -65.0  , -71.0 );
        kernels[76] = compute_kernel(x,   -64.0  , -48.0  , -90.0  , -90.0 );
        kernels[77] = compute_kernel(x,   -68.0  , -90.0  , -57.0  , -64.0 );
        kernels[78] = compute_kernel(x,   -67.0  , -51.0  , -59.0  , -72.0 );
        kernels[79] = compute_kernel(x,   -66.0  , -50.0  , -90.0  , -69.0 );
        kernels[80] = compute_kernel(x,   -67.0  , -52.0  , -90.0  , -74.0 );
        kernels[81] = compute_kernel(x,   -66.0  , -90.0  , -51.0  , -90.0 );
        kernels[82] = compute_kernel(x,   -65.0  , -51.0  , -90.0  , -90.0 );
        kernels[83] = compute_kernel(x,   -69.0  , -53.0  , -90.0  , -70.0 );
        kernels[84] = compute_kernel(x,   -66.0  , -50.0  , -51.0  , -90.0 );
        kernels[85] = compute_kernel(x,   -58.0  , -90.0  , -51.0  , -62.0 );
        kernels[86] = compute_kernel(x,   -90.0  , -42.0  , -55.0  , -56.0 );
        kernels[87] = compute_kernel(x,   -63.0  , -40.0  , -54.0  , -90.0 );
        kernels[88] = compute_kernel(x,   -67.0  , -51.0  , -53.0  , -61.0 );
        kernels[89] = compute_kernel(x,   -64.0  , -44.0  , -53.0  , -90.0 );
        kernels[90] = compute_kernel(x,   -70.0  , -49.0  , -90.0  , -57.0 );
        kernels[91] = compute_kernel(x,   -56.0  , -47.0  , -90.0  , -90.0 );
        kernels[92] = compute_kernel(x,   -58.0  , -90.0  , -54.0  , -90.0 );
        kernels[93] = compute_kernel(x,   -61.0  , -53.0  , -90.0  , -66.0 );
        kernels[94] = compute_kernel(x,   -72.0  , -52.0  , -90.0  , -65.0 );
        kernels[95] = compute_kernel(x,   -61.0  , -47.0  , -58.0  , -90.0 );
        kernels[96] = compute_kernel(x,   -57.0  , -90.0  , -54.0  , -90.0 );
        kernels[97] = compute_kernel(x,   -67.0  , -90.0  , -90.0  , -90.0 );
        kernels[98] = compute_kernel(x,   -90.0  , -50.0  , -54.0  , -90.0 );
        kernels[99] = compute_kernel(x,   -60.0  , -45.0  , -56.0  , -54.0 );
        kernels[100] = compute_kernel(x,   -58.0  , -46.0  , -90.0  , -90.0 );
        kernels[101] = compute_kernel(x,   -90.0  , -45.0  , -90.0  , -90.0 );
        kernels[102] = compute_kernel(x,   -65.0  , -90.0  , -90.0  , -90.0 );
        kernels[103] = compute_kernel(x,   -66.0  , -47.0  , -53.0  , -73.0 );
        kernels[104] = compute_kernel(x,   -68.0  , -54.0  , -56.0  , -57.0 );
        kernels[105] = compute_kernel(x,   -90.0  , -54.0  , -90.0  , -67.0 );
        kernels[106] = compute_kernel(x,   -63.0  , -58.0  , -55.0  , -64.0 );
        kernels[107] = compute_kernel(x,   -90.0  , -52.0  , -53.0  , -70.0 );
        kernels[108] = compute_kernel(x,   -56.0  , -42.0  , -53.0  , -90.0 );
        kernels[109] = compute_kernel(x,   -68.0  , -47.0  , -58.0  , -70.0 );
        kernels[110] = compute_kernel(x,   -73.0  , -51.0  , -90.0  , -68.0 );
        kernels[111] = compute_kernel(x,   -90.0  , -48.0  , -58.0  , -69.0 );
        kernels[112] = compute_kernel(x,   -65.0  , -47.0  , -54.0  , -90.0 );
        kernels[113] = compute_kernel(x,   -90.0  , -53.0  , -57.0  , -65.0 );
        kernels[114] = compute_kernel(x,   -73.0  , -55.0  , -62.0  , -68.0 );
        kernels[115] = compute_kernel(x,   -71.0  , -56.0  , -90.0  , -90.0 );
        kernels[116] = compute_kernel(x,   -67.0  , -49.0  , -90.0  , -70.0 );
        kernels[117] = compute_kernel(x,   -72.0  , -90.0  , -90.0  , -90.0 );
        kernels[118] = compute_kernel(x,   -69.0  , -48.0  , -55.0  , -67.0 );
        kernels[119] = compute_kernel(x,   -60.0  , -90.0  , -64.0  , -67.0 );
        kernels[120] = compute_kernel(x,   -65.0  , -46.0  , -90.0  , -59.0 );
        kernels[121] = compute_kernel(x,   -90.0  , -53.0  , -90.0  , -90.0 );
        kernels[122] = compute_kernel(x,   -90.0  , -47.0  , -71.0  , -90.0 );
        kernels[123] = compute_kernel(x,   -73.0  , -50.0  , -55.0  , -90.0 );
        kernels[124] = compute_kernel(x,   -90.0  , -50.0  , -53.0  , -90.0 );
        kernels[125] = compute_kernel(x,   -62.0  , -50.0  , -52.0  , -90.0 );
        kernels[126] = compute_kernel(x,   -90.0  , -54.0  , -51.0  , -90.0 );
        kernels[127] = compute_kernel(x,   -90.0  , -52.0  , -51.0  , -69.0 );
        kernels[128] = compute_kernel(x,   -69.0  , -90.0  , -55.0  , -90.0 );
        kernels[129] = compute_kernel(x,   -90.0  , -50.0  , -90.0  , -65.0 );
        kernels[130] = compute_kernel(x,   -90.0  , -51.0  , -49.0  , -70.0 );
        kernels[131] = compute_kernel(x,   -90.0  , -54.0  , -47.0  , -67.0 );
        kernels[132] = compute_kernel(x,   -90.0  , -47.0  , -50.0  , -69.0 );
        kernels[133] = compute_kernel(x,   -67.0  , -90.0  , -46.0  , -90.0 );
        kernels[134] = compute_kernel(x,   -67.0  , -47.0  , -90.0  , -67.0 );
        kernels[135] = compute_kernel(x,   -71.0  , -48.0  , -90.0  , -66.0 );
        kernels[136] = compute_kernel(x,   -90.0  , -45.0  , -48.0  , -90.0 );
        kernels[137] = compute_kernel(x,   -90.0  , -48.0  , -47.0  , -66.0 );
        kernels[138] = compute_kernel(x,   -72.0  , -51.0  , -49.0  , -64.0 );
        kernels[139] = compute_kernel(x,   -69.0  , -53.0  , -90.0  , -90.0 );
        kernels[140] = compute_kernel(x,   -90.0  , -46.0  , -47.0  , -66.0 );
        kernels[141] = compute_kernel(x,   -90.0  , -90.0  , -48.0  , -90.0 );
        kernels[142] = compute_kernel(x,   -67.0  , -47.0  , -47.0  , -65.0 );
        kernels[143] = compute_kernel(x,   -90.0  , -50.0  , -52.0  , -90.0 );
        kernels[144] = compute_kernel(x,   -69.0  , -90.0  , -47.0  , -90.0 );
        kernels[145] = compute_kernel(x,   -73.0  , -45.0  , -50.0  , -63.0 );
        kernels[146] = compute_kernel(x,   -73.0  , -90.0  , -49.0  , -62.0 );
        kernels[147] = compute_kernel(x,   -90.0  , -52.0  , -45.0  , -62.0 );
        kernels[148] = compute_kernel(x,   -90.0  , -45.0  , -48.0  , -90.0 );
        kernels[149] = compute_kernel(x,   -72.0  , -52.0  , -90.0  , -74.0 );
        kernels[150] = compute_kernel(x,   -56.0  , -44.0  , -50.0  , -56.0 );
        kernels[151] = compute_kernel(x,   -58.0  , -47.0  , -57.0  , -48.0 );
        kernels[152] = compute_kernel(x,   -65.0  , -46.0  , -58.0  , -54.0 );
        kernels[153] = compute_kernel(x,   -65.0  , -45.0  , -90.0  , -65.0 );
        kernels[154] = compute_kernel(x,   -63.0  , -51.0  , -62.0  , -49.0 );
        kernels[155] = compute_kernel(x,   -66.0  , -47.0  , -57.0  , -51.0 );
        kernels[156] = compute_kernel(x,   -71.0  , -48.0  , -66.0  , -55.0 );
        kernels[157] = compute_kernel(x,   -63.0  , -50.0  , -90.0  , -58.0 );
        kernels[158] = compute_kernel(x,   -66.0  , -43.0  , -57.0  , -55.0 );
        kernels[159] = compute_kernel(x,   -68.0  , -49.0  , -56.0  , -50.0 );
        kernels[160] = compute_kernel(x,   -62.0  , -50.0  , -90.0  , -53.0 );
        kernels[161] = compute_kernel(x,   -66.0  , -47.0  , -60.0  , -51.0 );
        kernels[162] = compute_kernel(x,   -65.0  , -47.0  , -59.0  , -53.0 );
        kernels[163] = compute_kernel(x,   -68.0  , -40.0  , -65.0  , -49.0 );
        kernels[164] = compute_kernel(x,   -90.0  , -38.0  , -90.0  , -52.0 );
        kernels[165] = compute_kernel(x,   -69.0  , -41.0  , -90.0  , -62.0 );
        kernels[166] = compute_kernel(x,   -65.0  , -90.0  , -90.0  , -50.0 );
        kernels[167] = compute_kernel(x,   -66.0  , -48.0  , -56.0  , -47.0 );
        kernels[168] = compute_kernel(x,   -69.0  , -47.0  , -90.0  , -50.0 );
        kernels[169] = compute_kernel(x,   -60.0  , -90.0  , -90.0  , -48.0 );
        kernels[170] = compute_kernel(x,   -67.0  , -50.0  , -65.0  , -49.0 );
        kernels[171] = compute_kernel(x,   -71.0  , -42.0  , -59.0  , -50.0 );
        kernels[172] = compute_kernel(x,   -60.0  , -55.0  , -90.0  , -64.0 );
        kernels[173] = compute_kernel(x,   -54.0  , -54.0  , -56.0  , -69.0 );
        kernels[174] = compute_kernel(x,   -57.0  , -90.0  , -90.0  , -66.0 );
        kernels[175] = compute_kernel(x,   -90.0  , -52.0  , -90.0  , -63.0 );
        kernels[176] = compute_kernel(x,   -48.0  , -52.0  , -54.0  , -69.0 );
        kernels[177] = compute_kernel(x,   -55.0  , -55.0  , -55.0  , -69.0 );
        kernels[178] = compute_kernel(x,   -54.0  , -52.0  , -90.0  , -74.0 );
        kernels[179] = compute_kernel(x,   -68.0  , -49.0  , -90.0  , -64.0 );
        kernels[180] = compute_kernel(x,   -55.0  , -52.0  , -60.0  , -68.0 );
        kernels[181] = compute_kernel(x,   -60.0  , -54.0  , -56.0  , -67.0 );
        kernels[182] = compute_kernel(x,   -90.0  , -49.0  , -90.0  , -67.0 );
        kernels[183] = compute_kernel(x,   -55.0  , -52.0  , -64.0  , -67.0 );
        kernels[184] = compute_kernel(x,   -56.0  , -54.0  , -66.0  , -75.0 );
        kernels[185] = compute_kernel(x,   -56.0  , -58.0  , -60.0  , -66.0 );
        kernels[186] = compute_kernel(x,   -67.0  , -55.0  , -57.0  , -66.0 );
        kernels[187] = compute_kernel(x,   -63.0  , -60.0  , -61.0  , -71.0 );
        kernels[188] = compute_kernel(x,   -56.0  , -52.0  , -56.0  , -72.0 );
        kernels[189] = compute_kernel(x,   -50.0  , -52.0  , -90.0  , -62.0 );
        kernels[190] = compute_kernel(x,   -51.0  , -50.0  , -59.0  , -69.0 );
        kernels[191] = compute_kernel(x,   -55.0  , -59.0  , -54.0  , -72.0 );
        kernels[192] = compute_kernel(x,   -55.0  , -70.0  , -57.0  , -68.0 );
        kernels[193] = compute_kernel(x,   -80.0  , -58.0  , -90.0  , -71.0 );
        kernels[194] = compute_kernel(x,   -90.0  , -58.0  , -53.0  , -65.0 );
        kernels[195] = compute_kernel(x,   -46.0  , -47.0  , -48.0  , -66.0 );
        kernels[196] = compute_kernel(x,   -73.0  , -56.0  , -90.0  , -65.0 );
        kernels[197] = compute_kernel(x,   -48.0  , -49.0  , -90.0  , -65.0 );
        kernels[198] = compute_kernel(x,   -51.0  , -54.0  , -52.0  , -79.0 );
        kernels[199] = compute_kernel(x,   -61.0  , -52.0  , -51.0  , -70.0 );
        kernels[200] = compute_kernel(x,   -56.0  , -90.0  , -48.0  , -59.0 );
        kernels[201] = compute_kernel(x,   -48.0  , -59.0  , -44.0  , -67.0 );
        kernels[202] = compute_kernel(x,   -59.0  , -90.0  , -90.0  , -70.0 );
        kernels[203] = compute_kernel(x,   -61.0  , -54.0  , -44.0  , -69.0 );
        kernels[204] = compute_kernel(x,   -45.0  , -90.0  , -50.0  , -67.0 );
        kernels[205] = compute_kernel(x,   -49.0  , -55.0  , -47.0  , -66.0 );
        kernels[206] = compute_kernel(x,   -56.0  , -90.0  , -50.0  , -69.0 );
        kernels[207] = compute_kernel(x,   -90.0  , -90.0  , -50.0  , -77.0 );
        kernels[208] = compute_kernel(x,   -57.0  , -54.0  , -90.0  , -70.0 );
        kernels[209] = compute_kernel(x,   -65.0  , -53.0  , -90.0  , -70.0 );
        kernels[210] = compute_kernel(x,   -50.0  , -57.0  , -47.0  , -65.0 );
        kernels[211] = compute_kernel(x,   -76.0  , -60.0  , -50.0  , -72.0 );
        kernels[212] = compute_kernel(x,   -61.0  , -59.0  , -53.0  , -69.0 );
        kernels[213] = compute_kernel(x,   -43.0  , -90.0  , -54.0  , -66.0 );
        kernels[214] = compute_kernel(x,   -90.0  , -52.0  , -56.0  , -70.0 );
        kernels[215] = compute_kernel(x,   -54.0  , -58.0  , -55.0  , -70.0 );
        kernels[216] = compute_kernel(x,   -47.0  , -51.0  , -46.0  , -69.0 );
        kernels[217] = compute_kernel(x,   -90.0  , -50.0  , -50.0  , -67.0 );
        kernels[218] = compute_kernel(x,   -46.0  , -54.0  , -46.0  , -69.0 );
        kernels[219] = compute_kernel(x,   -78.0  , -57.0  , -83.0  , -78.0 );
        kernels[220] = compute_kernel(x,   -75.0  , -54.0  , -90.0  , -82.0 );
        kernels[221] = compute_kernel(x,   -76.0  , -52.0  , -90.0  , -82.0 );
        kernels[222] = compute_kernel(x,   -72.0  , -60.0  , -90.0  , -65.0 );
        kernels[223] = compute_kernel(x,   -72.0  , -56.0  , -90.0  , -68.0 );
        kernels[224] = compute_kernel(x,   -90.0  , -56.0  , -74.0  , -74.0 );
        kernels[225] = compute_kernel(x,   -90.0  , -90.0  , -75.0  , -72.0 );
        kernels[226] = compute_kernel(x,   -90.0  , -52.0  , -90.0  , -74.0 );
        kernels[227] = compute_kernel(x,   -70.0  , -57.0  , -90.0  , -71.0 );
        kernels[228] = compute_kernel(x,   -72.0  , -54.0  , -90.0  , -76.0 );
        kernels[229] = compute_kernel(x,   -81.0  , -53.0  , -90.0  , -70.0 );
        decisions[0] = -5.773378151
                    + kernels[6] * 0.078977625
                    + kernels[11] * 0.196701356
                    + kernels[19] * -0.043884354
                    + kernels[21] * -0.064410813
                    + kernels[23] * -0.011436738
                    + kernels[34] * -0.007264067
                    + kernels[54] * -0.148683007
        ;
        decisions[1] = -1.624536449
                    + kernels[2]
                    + kernels[3] * 0.25292002
                    + kernels[4] * 0.544835453
                    + kernels[5] * 0.200247455
                    + kernels[6]
                    + kernels[8] * 0.702587936
                    + kernels[11]
                    + kernels[73] * -0.367246527
                    + kernels[75] * -0.929991643
                    + kernels[87] * -0.047874833
                    + kernels[94] * -0.288187796
                    + kernels[99] * -0.829594487
                    + kernels[100] * -0.237695578
                    - kernels[104]
                    - kernels[105]
        ;
        decisions[2] = -8.708686568
                    + kernels[4]
                    + kernels[5] * 0.260212161
                    + kernels[6] * 0.333504671
                    + kernels[9] * 0.855040147
                    + kernels[10]
                    + kernels[11]
                    + kernels[12]
                    + kernels[129] * -0.530182369
                    + kernels[141] * -0.092794661
                    + kernels[147] * -0.003896179
                    + kernels[149] * -0.203952656
                    - kernels[154]
                    - kernels[159]
                    + kernels[160] * -0.404117007
                    + kernels[166] * -0.389284672
                    + kernels[167] * -0.813084697
                    + kernels[168] * -0.011444739
                    - kernels[170]
        ;
        decisions[3] = -0.450340429
                    + kernels[0] * 0.062227238
                    + kernels[2]
                    + kernels[3] * 0.241516347
                    + kernels[4] * 0.713233318
                    + kernels[6] * 0.820817747
                    + kernels[8] * 0.366355544
                    + kernels[174] * -0.057214343
                    + kernels[175] * -0.2527853
                    + kernels[184] * -0.093774992
                    + kernels[186] * -0.419665852
                    + kernels[190] * -0.158037197
                    - kernels[193]
                    + kernels[196] * -0.65830201
                    + kernels[214] * -0.5643705
        ;
        decisions[4] = 5.046922464
                    + kernels[0] * 0.067241809
                    + kernels[1] * 0.00231335
                    + kernels[2] * 0.888858103
                    + kernels[4] * 0.042111011
                    + kernels[6]
                    + kernels[7] * 0.331264933
                    - kernels[219]
                    + kernels[221] * -0.191005929
                    + kernels[222] * -0.083469848
                    + kernels[224] * -0.979671369
                    + kernels[225] * -0.077642061
        ;
        decisions[5] = 6.792101902
                    + kernels[13] * 0.071698076
                    + kernels[14]
                    + kernels[15]
                    + kernels[18]
                    + kernels[19]
                    + kernels[20]
                    + kernels[21] * 0.565578794
                    + kernels[22] * 0.464920374
                    + kernels[23]
                    + kernels[24]
                    + kernels[25]
                    + kernels[29]
                    + kernels[33] * 0.397285562
                    + kernels[34]
                    + kernels[35] * 0.420380792
                    + kernels[36] * 0.301329906
                    + kernels[38]
                    + kernels[40] * 0.690499717
                    + kernels[41]
                    + kernels[44]
                    + kernels[45]
                    + kernels[46]
                    + kernels[47]
                    + kernels[48]
                    + kernels[49]
                    + kernels[51]
                    + kernels[52]
                    + kernels[53]
                    + kernels[54]
                    + kernels[55]
                    - kernels[57]
                    - kernels[62]
                    - kernels[63]
                    - kernels[64]
                    - kernels[65]
                    - kernels[66]
                    - kernels[68]
                    + kernels[71] * -0.012461039
                    - kernels[76]
                    - kernels[82]
                    - kernels[84]
                    - kernels[86]
                    - kernels[87]
                    - kernels[89]
                    - kernels[91]
                    + kernels[92] * -0.084411544
                    + kernels[93] * -0.698079036
                    - kernels[95]
                    - kernels[96]
                    - kernels[99]
                    - kernels[100]
                    + kernels[101] * -0.209130829
                    - kernels[103]
                    - kernels[108]
                    - kernels[109]
                    - kernels[112]
                    - kernels[116]
                    + kernels[118] * -0.907610773
                    - kernels[120]
        ;
        decisions[6] = 3.778623846
                    + kernels[13]
                    + kernels[15]
                    + kernels[16] * 0.392304285
                    + kernels[17] * 0.445227727
                    + kernels[21]
                    + kernels[29] * 0.620174573
                    + kernels[33] * 0.100468923
                    + kernels[34]
                    + kernels[42] * 0.238881152
                    + kernels[43] * 0.531722416
                    + kernels[44]
                    + kernels[45]
                    + kernels[46]
                    + kernels[48]
                    + kernels[49]
                    + kernels[52]
                    + kernels[53]
                    + kernels[54]
                    - kernels[122]
                    + kernels[123] * -0.622853496
                    - kernels[125]
                    + kernels[128] * -0.002672413
                    - kernels[134]
                    - kernels[139]
                    - kernels[140]
                    - kernels[142]
                    - kernels[145]
                    + kernels[149] * -0.188557797
                    - kernels[150]
                    + kernels[151] * -0.151938329
                    - kernels[153]
                    - kernels[158]
                    - kernels[163]
                    + kernels[164] * -0.40350036
                    - kernels[165]
                    + kernels[171] * -0.95925668
        ;
        decisions[7] = 2.72853006
                    + kernels[19]
                    + kernels[21] * 0.363343496
                    + kernels[23]
                    + kernels[24]
                    + kernels[25]
                    + kernels[26]
                    + kernels[27] * 0.785842228
                    + kernels[28]
                    + kernels[30]
                    + kernels[31]
                    + kernels[32]
                    + kernels[34]
                    + kernels[39] * 0.206420895
                    + kernels[40]
                    + kernels[49]
                    + kernels[50]
                    + kernels[53]
                    + kernels[54]
                    - kernels[176]
                    - kernels[178]
                    - kernels[179]
                    - kernels[180]
                    - kernels[182]
                    - kernels[183]
                    - kernels[188]
                    + kernels[189] * -0.121607918
                    - kernels[190]
                    - kernels[195]
                    - kernels[197]
                    + kernels[198] * -0.707856112
                    - kernels[199]
                    - kernels[203]
                    + kernels[204] * -0.183195458
                    - kernels[209]
                    + kernels[213] * -0.264326251
                    + kernels[214] * -0.00780527
                    - kernels[216]
                    - kernels[217]
                    + kernels[218] * -0.070815611
        ;
        decisions[8] = 15.242200367
                    + kernels[19] * 0.027666668
                    + kernels[21] * 0.03519799
                    + kernels[23] * 0.01082335
                    + kernels[37] * 0.009176127
                    + kernels[223] * -0.040242426
                    + kernels[224] * -0.018659417
                    + kernels[228] * -0.023962292
        ;
        decisions[9] = -3.368631805
                    + kernels[56]
                    + kernels[57]
                    + kernels[58]
                    + kernels[59]
                    + kernels[60]
                    + kernels[61]
                    + kernels[62]
                    + kernels[63]
                    + kernels[64]
                    + kernels[65]
                    + kernels[66]
                    + kernels[69]
                    + kernels[72]
                    + kernels[74] * 0.629986522
                    + kernels[79] * 0.948167035
                    + kernels[81] * 0.352379403
                    + kernels[84] * 0.661615862
                    + kernels[85] * 0.828402668
                    + kernels[86]
                    + kernels[87] * 0.79661142
                    + kernels[88]
                    + kernels[90]
                    + kernels[94]
                    + kernels[98]
                    + kernels[99]
                    + kernels[103]
                    + kernels[104]
                    + kernels[105] * 0.911362581
                    + kernels[107]
                    + kernels[108] * 0.720197887
                    + kernels[110]
                    + kernels[111] * 0.475156737
                    + kernels[113]
                    + kernels[116]
                    + kernels[118]
                    + kernels[120]
                    - kernels[122]
                    - kernels[123]
                    - kernels[124]
                    - kernels[125]
                    - kernels[126]
                    - kernels[127]
                    - kernels[128]
                    - kernels[129]
                    - kernels[130]
                    - kernels[132]
                    - kernels[134]
                    - kernels[135]
                    + kernels[136] * -0.174057783
                    + kernels[137] * -0.975766172
                    - kernels[138]
                    - kernels[139]
                    - kernels[140]
                    - kernels[142]
                    - kernels[143]
                    - kernels[145]
                    + kernels[146] * -0.694982459
                    + kernels[148] * -0.071200729
                    - kernels[149]
                    - kernels[150]
                    - kernels[151]
                    - kernels[152]
                    - kernels[153]
                    - kernels[154]
                    - kernels[155]
                    - kernels[156]
                    + kernels[157] * -0.959164311
                    - kernels[158]
                    - kernels[159]
                    - kernels[161]
                    - kernels[162]
                    + kernels[166] * -0.19303028
                    + kernels[170] * -0.255678382
        ;
        decisions[10] = -3.838869099
                    + kernels[58]
                    + kernels[61] * 0.362481707
                    + kernels[62]
                    + kernels[63]
                    + kernels[64]
                    + kernels[65]
                    + kernels[66]
                    + kernels[67]
                    + kernels[69]
                    + kernels[72]
                    + kernels[73] * 0.200404705
                    + kernels[74] * 0.310822661
                    + kernels[77] * 0.927282669
                    + kernels[78]
                    + kernels[79]
                    + kernels[83] * 0.862467608
                    + kernels[85]
                    + kernels[86]
                    + kernels[88]
                    + kernels[90]
                    + kernels[91] * 0.253703701
                    + kernels[92] * 0.776661774
                    + kernels[93]
                    + kernels[94]
                    + kernels[96]
                    + kernels[97] * 0.534827383
                    + kernels[99]
                    + kernels[102]
                    + kernels[103] * 0.46096013
                    + kernels[104]
                    + kernels[106]
                    + kernels[113]
                    + kernels[114]
                    + kernels[118]
                    + kernels[119]
                    + kernels[120]
                    + kernels[172] * -0.719125879
                    - kernels[173]
                    - kernels[175]
                    - kernels[177]
                    - kernels[179]
                    - kernels[180]
                    - kernels[181]
                    - kernels[182]
                    - kernels[183]
                    - kernels[184]
                    - kernels[185]
                    - kernels[186]
                    - kernels[187]
                    - kernels[188]
                    - kernels[191]
                    - kernels[192]
                    - kernels[193]
                    - kernels[194]
                    - kernels[196]
                    - kernels[199]
                    - kernels[200]
                    - kernels[202]
                    - kernels[203]
                    - kernels[204]
                    - kernels[206]
                    + kernels[207] * -0.706543632
                    - kernels[208]
                    - kernels[209]
                    - kernels[211]
                    - kernels[212]
                    + kernels[213] * -0.174456398
                    - kernels[214]
                    + kernels[215] * -0.089486429
                    - kernels[217]
        ;
        decisions[11] = 7.853249883
                    + kernels[70]
                    + kernels[75] * 0.226395632
                    + kernels[80] * 0.367342686
                    + kernels[83]
                    + kernels[94] * 0.305456871
                    + kernels[105]
                    + kernels[110]
                    + kernels[115] * 0.313029184
                    + kernels[117] * 0.149907688
                    + kernels[121]
                    + kernels[220] * -0.496328061
                    - kernels[221]
                    - kernels[223]
                    + kernels[224] * -0.424983108
                    - kernels[226]
                    + kernels[227] * -0.93379192
                    - kernels[228]
                    + kernels[229] * -0.507028972
        ;
        decisions[12] = 2.861595603
                    + kernels[125] * 0.247242326
                    + kernels[127]
                    + kernels[128]
                    + kernels[129] * 0.892538689
                    + kernels[131]
                    + kernels[133] * 0.163467746
                    + kernels[138]
                    + kernels[139]
                    + kernels[142]
                    + kernels[144]
                    + kernels[146] * 0.606367581
                    + kernels[147] * 0.736806924
                    + kernels[149]
                    + kernels[150]
                    + kernels[151] * 0.821812833
                    + kernels[152]
                    + kernels[154]
                    + kernels[155]
                    + kernels[156]
                    + kernels[157]
                    + kernels[159] * 0.446813905
                    + kernels[162]
                    + kernels[166] * 0.121370742
                    + kernels[169] * 0.006049102
                    - kernels[175]
                    - kernels[179]
                    - kernels[182]
                    - kernels[186]
                    - kernels[194]
                    - kernels[195]
                    - kernels[196]
                    + kernels[197] * -0.119005545
                    - kernels[199]
                    - kernels[200]
                    - kernels[201]
                    - kernels[203]
                    - kernels[205]
                    - kernels[207]
                    + kernels[209] * -0.82865708
                    + kernels[210] * -0.181147054
                    - kernels[211]
                    - kernels[214]
                    - kernels[216]
                    - kernels[217]
                    + kernels[218] * -0.913660168
        ;
        decisions[13] = 21.262741025
                    + kernels[129] * 0.199399668
                    + kernels[139] * 0.329753656
                    + kernels[141] * 0.020419387
                    + kernels[149]
                    + kernels[166] * 0.061001954
                    + kernels[221] * -0.382265335
                    + kernels[223] * -0.371334372
                    + kernels[224] * -0.057269221
                    + kernels[228] * -0.799705735
        ;
        decisions[14] = 12.771817661
                    + kernels[175] * 0.130816917
                    + kernels[193]
                    + kernels[196]
                    + kernels[202] * 0.087571523
                    + kernels[207] * 0.001639519
                    + kernels[209]
                    + kernels[222] * -0.772596528
                    - kernels[223]
                    + kernels[224] * -0.018994622
                    + kernels[227] * -0.846966779
                    + kernels[229] * -0.581470029
        ;
        votes[decisions[0] > 0 ? 0 : 1] += 1;
        votes[decisions[1] > 0 ? 0 : 2] += 1;
        votes[decisions[2] > 0 ? 0 : 3] += 1;
        votes[decisions[3] > 0 ? 0 : 4] += 1;
        votes[decisions[4] > 0 ? 0 : 5] += 1;
        votes[decisions[5] > 0 ? 1 : 2] += 1;
        votes[decisions[6] > 0 ? 1 : 3] += 1;
        votes[decisions[7] > 0 ? 1 : 4] += 1;
        votes[decisions[8] > 0 ? 1 : 5] += 1;
        votes[decisions[9] > 0 ? 2 : 3] += 1;
        votes[decisions[10] > 0 ? 2 : 4] += 1;
        votes[decisions[11] > 0 ? 2 : 5] += 1;
        votes[decisions[12] > 0 ? 3 : 4] += 1;
        votes[decisions[13] > 0 ? 3 : 5] += 1;
        votes[decisions[14] > 0 ? 4 : 5] += 1;
                int classVal = -1;
        int classIdx = -1;
        for (int i = 0; i < 6; i++) {
            if (votes[i] > classVal) {
                classVal = votes[i];
                classIdx = i;
            }
        }
        return classIdx;

}
        protected:
    double compute_kernel(double x[4], ...) {
                    va_list w;
                double kernel = 0.0;
                va_start(w, 4);
                for (uint16_t i = 0; i < 4; i++)
                        kernel += x[i] *  va_arg(w, double) ;
                    kernel = pow((0.001 * kernel) + 0.0, 3);
                return kernel;
    }
            };
                        }
                    }
                }
