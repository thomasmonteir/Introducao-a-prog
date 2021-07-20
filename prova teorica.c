
int main(){
    int a, b;

    printf("Digite a e b: ");
    scanf("%d%d", &a, &b);

    while( (a++ % 2) || !(b++ % 2) ){
        printf("a=%d, b=%d\n", a, b);
        if (a > b){
            printf("aqui\n");
        }else{
        	continue;
        }
    }

    return 0;
}
