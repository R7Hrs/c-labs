    #include <stdio.h>

    int main(void) {
        int N, score[21], M, F, i, points, who;
        char C;
        
        scanf("%d %d", &N, &M);
        scanf(" %c %d", &C, &F);

        if (C != '>' && C != '<' && C != '=' && C != '!') { printf("ERROR"); return 0; }

        for (i = 1; i <= N; i++){
            score[i] = 0;
        }
        
        for (i = 1; i <= M; i++){
            scanf("%d %d", &who, &points);
            score[who] = score[who] + points;
        }

        for (i = 1; i <= N; i++){
            if ((C == '>' && score[i] > F) || (C == '<' && score[i] < F) || (C == '=' && score[i] == F) || (C == '!' && score[i] != F)) {
                printf("%d(%d) ", i, score[i]);
            }
        }

        return 0;
    }