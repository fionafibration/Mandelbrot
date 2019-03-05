int main(){double x,y,u,v,w,z;int 
i,j,k;for(j=0;j<33;j++){y=1-j*(2./
33);for(i=0;i<80;i++){u=0;v=0;w=u*
u;z=v*v;x=i*.0375-2;for(k=1;k<2e3&
(w+z<4);k++)v=2*u*v+y,u=w-z+x,w=u*
u,z=v*v;putchar(k>=27?32:97+k/3);}
putchar(10);}}/*Fin's C Fractals*/
