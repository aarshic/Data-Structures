/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
/*You are required to complete this method*/
int tour(petrolPump p[],int n){
   //Your code here
    queue<int> q1,q2;
    for(int i=0;i<n;i++){
        q1.push(p[i].petrol);
        q1.push(p[i].distance);
    }
    int x=0,y=0,z=0,index=0,j=0,flag=0;
    while(!q1.empty()){
        x=q1.front();
        q1.pop();
        y=q1.front();
        q1.pop();
        if((x+z)>=y){
            if(flag==0){
                index=j;
                flag=1;
            }
            q2.push(x);
            q2.push(y);
            z=(x+z)-y;
        }
        else{
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
            q1.push(x);
            q1.push(y);
            flag=0;
            z=0;
        }
        j++;
        if(j>=2*n){
            index=-1;
            break;
        }
    }
    return index%n;
}

