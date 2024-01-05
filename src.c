#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char article[][15] = {"A", "An", "The","It","They","how","where","what","when","why","hello","The man","her majistry","he","she","you","Me","I","Also","technically"}; //20

char noun[][15] = {"Actor","Gold","Painting","Advertisement","Grass","Parrot","Afternoon","Greece","Pencil","Airport","Guitar","Piano","Ambulance","Hair","Pillow","Animal","Hamburger","Pizza","Answer","Helicopter","Planet","Apple","Helmet","Plastic","Army","Holiday","Portugal","Australia","Honey","Potato","Balloon","Horse","Queen","Banana","Hospital","Quill","Battery","House","Rain","Beach","Hydrogen","Rainbow","Beard","Ice","Raincoat","Bed","Insect","Refrigerator","Belgium","Insurance","Restaurant","Boy","Iron","River","Branch","Island","Rocket","Breakfast","Jackal","Room","Brother","Jelly","Rose","Camera","Jewellery","Russia","Candle","Jordan","Sandwich","Car","Juice","School","Caravan","Kangaroo","Scooter","Carpet","King","Shampoo","Cartoon","Kitchen","Shoe","China","Kite","Soccer","Church","Knife","Spoon","Crayon","Lamp","Stone","Crowd","Lawyer","Sugar","Daughter","Leather","Sweden","Death","Library","Teacher","Denmark","Lighter","Telephone","Diamond","Lion","Television","Dinner","Lizard","Tent","Disease","Lock","Thailand","Doctor","London","Tomato","Dog","Lunch","Toothbrush"}; //117

char verb[][15] = {"ask","be","become","begin","call","can","come","could","do","feel","find","get","give","go","have","hear","help","keep","know","leave","let","like","live","look","make","may","mean","might","move","need","play","put","run","say","see","seem","should","show","start","take","talk","tell","think","try","turn","use","want","will","work","would"}; //50

char preposition[][202] = {"About","Above","According to","Across","After","Against","Ago","Ahead of","Along","Amidst","Among","Amongst","Apart","Around","As","As far as","As well as","Aside","At","Away","Because of","Before","Behind","Below","Beneath","Beside","Besides","Between","Beyond","By","By means of","By way of","Close to","Despite","Down","Due to","During","Except","For","From","Hence","In","In accordance with","In addition to","In case of","In front of","In lieu of","In place of","In regard to","In spite of","In to","Inside","Instead of","Into","Like","Near","Next","Next to","Notwithstanding","Of","Off","On","On account of","On behalf of","On to","On top of","Onto","Opposite","Out","Out from","Out of","Outside","Over","Owing to","Past","Per","Prior to","Round","Since","Than","Through","Throughout","Till","To","Toward","Towards","Under","Underneath","Unlike","Until","Unto","Up","Upon","Via","With","With a view to","Within","Without","Wort"}; //100

char join[][15] = {"after","although","as","as if","as long as","as much as","as soon as","as far as","as though","by the time","in as much as","inasmuch","in order to","in order that","in case","lest","though","now that","now since","now when","now","even if","even","even though","provided","provide that","if","if then","if when","if only","just as","where","wherever","whereas","where if","whether","since","because","whose","whoever","unless","while","before","why","so that","until","how","since","than","till","whenever","supposing","when","or not","what"}; //54

char assignment[][50] = {" assignment"," group report"," case study"," research paper"," lecture slides"," moddle solution"," chapter 1 solution"," Chapter 2 solution"," Chapter 3 solution"," Chapter 4 solution"," Module discription"," Student paper"," Important topics"," description"," project"," Sample homework"," Old questions"," Sample questions"," Notes"," Notes of chapter 1"}; //20

char assignment2[][50] = {"assignment of ","group report of ","case study of ","research paper of ","lecture slides of ","moddle solution of ","chapter 1 solution of ","Chapter 2 solution of ","Chapter 3 solution of ","Chapter 4 solution of ","Module discription of ","Student paper of ","Important topics of ","description of ","project of ","Sample homework of ","Old questions of ","Sample questions of ","Notes of ","Notes of chapter 1 of ",}; //20



// Article and noun and . or conjuction

int main(){
    int f;
    FILE *fp;
    int i;
    int y;
    int bv;
    char randomletter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char fame[][100] = {"",".txt",""};
    srand(time(0));
    printf("How many files to generate : ");
    scanf("%d",&f);
    while (f != 0){
        printf("Total files remaining To create : %d\n",f);
        fame[2][0] = ' ';
        fame[2][1] = randomletter[rand() % 25];
        fame[2][2] = randomletter[rand() % 25];
        fame[2][3] = randomletter[rand() % 25];
        fame[2][4] = randomletter[rand() % 25];
        fame[2][5] = ' ';

        y = 0;
        while (y < 100){
        fame[0][y] = '\0';
        y++;
        }

         if ((rand() % 6) <= 3){
             strcat(fame[0],assignment2[rand() % 19]);
            strcat(fame[0],fame[2]);
              strcat(fame[0],fame[1]);
              
        }else {
            strcat(fame[0],fame[2]);
              strcat(fame[0],assignment[rand() % 19]);
              strcat(fame[0],fame[1]);  
             
        }


    i = 30;
    bv = rand() % 10;
    if (bv == 0) {
        bv = 5;
    }
    while (i < ((311*bv)+bv)) {
    fp = fopen(fame[0],"a");
    fprintf(fp," %s %s %s %s %s %s ", article[rand() % 19],noun[rand() % 116],verb[rand() % 49],preposition[rand() % 99],article[rand() % 19],noun[rand() % 116]);
    if ((rand() % 2)){
        fprintf(fp," %s ",join[rand() % 53]);
    }else{
        fprintf(fp,"%s ",".");
    }
    if ((i % 29) == 0){
        fprintf(fp,"\n");
    }
	fclose(fp);
    i++;
    }
    f--;
    }
    
    
    return 0;
}


