#include <stdio.h>
#include <stdint.h>

extern int ntt_3_layer_merged(int32_t a[256]);

int main() {
    int32_t a[256] = {0,};
    for(int i=0; i<256; i++){
        a[i] = i*256;
    }

    printf("ntt start...\n");
    ntt_3_layer_merged(a);
    printf("ntt end...\n");

    for(int i=0; i<256; i++){
        printf("%x ", a[i]);
        if((i+1)%16 == 0){
            printf("\n");
        }
    }

    return 0;
}