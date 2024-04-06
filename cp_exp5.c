#include<stdio.h>
#include<ctype.h>
#include<string.h>

/*
int main(void){																	//q4
	char s1[100]="Eskisehir is a beautiful city in Turkey";
	char c='r';
	char *sPtr=NULL;
	int i=0;
	while(s1[i]!=c)
		i++;
	
	sPtr=&s1[i];
	printf("after first occuranes of %c in \"%s\"\n\"%s\"",c,s1,sPtr);
}
*/


/*
int main(void){
	char s1[1000]="Mobile robots are now widely used both in real-life applications, and the complexity of the tasks they are expected to perform is increasing. For a mobile robot operating indoors, it is essential to interpret its surroundings in semantic terms as well as to extract and process precise geometric measurements from the environment.";
	char *tokenPtr;
	char c='i';
	int i=0;
	printf("S1: %s\n",s1);														//a5 
	
	tokenPtr=strtok(s1," ,.");
	
	while(tokenPtr!=NULL){
		if(*tokenPtr==c){
			printf("%s\n",tokenPtr);
			i++;
		}
		tokenPtr=strtok(NULL," ,.");
	}
	printf("there are %d words starts with %c",i,c);

return 0;	
}
*/



/*
int main(void){
	char s1[2000]="In large-scale environments, robots should have proper internal representation of the surroundings for achieving tasks such as localization, navigation, and exploration. Internal representations could be categorized in two ways: metric (grid-based) map and topological map. In this paper, we aim to generate a topological map representation (collision-free graph) of the large-scale environment from its metric map. The metric map is constructed by using laser range data with grid-line intersection algorithm. After metric map is obtained, spectral clustering is applied. Apart from the studies in literature, only the new cells obtained in a fixed time interval are employed in spectral clustering algorithm to avoid drawbacks of computational cost. Thus, the topological map grows incrementally in an online manner. In our work, we intended to represent the environment with as minimum as possible number of nodes. At the same time, the topological map must cover the entire environment. To do that, number of cluster is determined adaptively with respect to the number of new cells that can be combined in order to generate a cluster. Also, a simple heuristic is used for initialization of the k-means to avoid unrepeatable results. Lastly, obtained cluster centers are defined as nodes and they are connected to each other using minimum spanning tree algorithm. The proposed method is tested in ESOGU Electrical Engineering Laboratory building that is modelled in Gazebo simulation environment by using ROS. Experiments are conducted to demonstrate the performance of the proposed method.";
	char *tokenPtr;
	
	tokenPtr=strtok(s1," ,.");												//q7
	
	while(tokenPtr!=NULL){
		
		if (*(tokenPtr)=='T' || *(tokenPtr)=='t' ){
			printf("%s\n",tokenPtr);
		}
		tokenPtr=strtok(NULL," ,.");
	}

	return 0;
}
*/


