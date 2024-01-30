#include<stdio.h>

int main(){
	int n,m,i,j,k,l,o,p,q,r,s,t,u,v;

	printf("Enter year: ");
	scanf("%d",&n);

	switch(n){
		case 2025:

			printf("Enter month: ");
	scanf("%d",&m);

	switch(m){
	case 1:
		printf("\n\nJanuary\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t");
		for(i=1;i<=31;i++){
		if(i==5 ||i==12 || i==19|| i==26){
		printf("%d\n\n",i);
		}
		else{
		printf("%d\t",i);
		}
		}
		break;

	case 2:
		printf("\n\nFebruary\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t \t \t \t");
		for(j=1;j<=28;j++){
		if(j==2 ||j==9 || j==16|| j==23){
		printf("%d\n\n",j);
		}
		else{
		printf("%d\t",j);
		}
		}
		break;

	case 3:
		printf("\n\nMarch\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t \t \t \t");
		for(k=1;k<=31;k++){
		if(k==2 ||k==9 || k==16|| k==23 || k==30){
		printf("%d\n\n",k);
		}
		else{
		printf("%d\t",k);
		}
		}
		break;

	case 4:
		printf("\n\nApril\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t");
		for(l=1;l<=30;l++){
		if(l==6 ||l==13 ||l==20 || l==27){
		printf("%d\n\n",l);
		}
		else{
		printf("%d\t",l);
		}
		}
		break;

	case 5:
		printf("\n\nMay\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t \t");
		for(o=1;o<=31;o++){
		if(o==4 ||o==11 ||o==18 || o==25){
		printf("%d\n\n",o);
		}
		else{
		printf("%d\t",o);
		}
		}
		break;

	case 6:
		printf("\n\nJune\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t \t \t \t \t");
		for(p=1;p<=30;p++){
		if(p==1 ||p==8 ||p==15 ||p==22 || p==29){
		printf("%d\n\n",p);
		}
		else{
		printf("%d\t",p);
		}
		}
		break;

	case 7:
		printf("\n\nJuly\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t");
		for(q=1;q<=31;q++){
		if(q==6 ||q==13 ||q==20 || q==27){
		printf("%d\n\n",q);
		}
		else{
		printf("%d\t",q);
		}
		}
		break;

	case 8:
		printf("\n\nAugust\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t \t \t");
		for(r=1;r<=31;r++){
		if(r==3 ||r==10 ||r==17 ||r==24 || r==31){
		printf("%d\n\n",r);
		}
		else{
		printf("%d\t",r);
		}
		}
		break;

	case 9:
		printf("\n\nSeptember\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		for(s=1;s<=30;s++){
		if(s==7 ||s==14 ||s==21 || s==28){
		printf("%d\n\n",s);
		}
		else{
		printf("%d\t",s);
		}
		}
		break;

	case 10:
		printf("\n\nOctober\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t");
		for(t=1;t<=31;t++){
		if(t==5 ||t==12 ||t==19 || t==26){
		printf("%d\n\n",t);
		}
		else{
		printf("%d\t",t);
		}
		}
		break;

	case 11:
		printf("\n\nNovember\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		printf(" \t \t \t \t \t");
		for(u=1;u<=30;u++){
		if(u==2 ||u==9 || u==16|| u==23 || u==30){
		printf("%d\n\n",u);
		}
		else{
		printf("%d\t",u);
		}
		}
		break;

	case 12:
		printf("\n\nDecember\n\n");
		printf("M\tT\tW\tT\tF\tS\tS\n\n");

		for(v=1;v<=31;v++){
		if(v==7 ||v==14 || v==21|| v==28){
		printf("%d\n\n",v);
		}
		else{
		printf("%d\t",v);
		}
		}
		break;

		default:
			printf("wrong input");
		}
		break;

			default:
				printf("Wrong input");
	}
	return 0;
}   
