    #include <stdio.h>

    int main(void) {
        int c, mcount = 0, pcount = 0, hcount = 0, ecount = 0, i;
        float g, metal[100], plastic[100], paper[100], electronics[100], msum = 0, psum = 0, hsum = 0, esum = 0;

        do { 
            scanf("%d", &c); 
            if (c ==0 ) {
                break;
            } 

            scanf("%f", &g); 

            if (c >= 1 && c <= 4 && g >= 0){
                if ( c == 1){ metal[mcount] = g; mcount++;}
                else if ( c == 2){ plastic[pcount] = g; pcount++;}
                else if ( c == 3){ paper[hcount] = g; hcount++;}
                else if ( c == 4){ electronics[ecount] = g; ecount++;}

            }
        } while (c != 0);

        for ( i = 0; i < mcount; i++){
            msum += metal[i];
        }

        for ( i = 0; i < pcount; i++){
            psum += plastic[i];
        }

        for ( i = 0; i < hcount; i++){
            hsum += paper[i];
        }

        for ( i = 0; i < ecount; i++){
            esum += electronics[i];
        }


        if ( mcount > 0){
            printf("M ");
            for ( i = 0; i < mcount; i++){
                printf("%.1f ", metal[i]);
            }
            printf("%.1f\n", msum);
        }

        if ( pcount > 0){
            printf("P ");
            for ( i = 0; i < pcount; i++){
                printf("%.1f ", plastic[i]);
            }
            printf("%.1f\n", psum);
        }

        if ( hcount > 0){
            printf("H ");
            for ( i = 0; i < hcount; i++){
                printf("%.1f ", paper[i]);
            }
            printf("%.1f\n", hsum);
        }

        if ( ecount > 0){
            printf("E ");
            for ( i = 0; i < ecount; i++){
                printf("%.1f ", electronics[i]);
            }
            printf("%.1f\n", esum);
        }

        if (mcount == 0 && pcount == 0 && hcount == 0 && ecount == 0) {
    printf("{Empty}\n");
}       
        return 0;
    }