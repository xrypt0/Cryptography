#include <stdio.h>

	//This Code Belongs To Xrypt0. 
int main(int argc, char *argv[]) {
	char alphabet[24] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','q','w','x','y','z'};
	char text[1000];
	int key;
	printf("Please Enter The Text You Want To Encrypt : ");
	scanf("%s",&text);
	printf("\n Please Enter The Key : ");
	scanf("%d",&key);
	if(key >= 25){
		key = key % 24;
	}
    
    int o = 0;
    int y = 0;
    int z;
    int length = strlen(text);
    
	for(z=1;z<=length;z++){
		if(text[o]==alphabet[y]){
			int position = y+1;
			int real = position + key - 1; 
			printf("%c",alphabet[real]);
			o++;
		}
		else{
			z--;
			y = y+1;
			if(y==25){
				y=0;
			}
		}
	} 
	
	//This Code Belongs To Xrypt0. 
	
	return 0;
}
