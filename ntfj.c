                           #include  "ntfj.h"
typedef      struct{      i s;i c;i*d;}s;s*I(k      )s*k;{k->d=M(k->c B)      ;};v r(s*k){if(k->s<
k->c){0;     }else{k      ->d=R(k->d,k->c B*2)      ;k->c*=2;}}S(A a){i       z;W(z++[a]);J z;}v p
(k,m )s*k    ;{k->d[             k->s++             ]=m;r(k                          );}v d       
(k)s  *k;{   for(i G             =0;G<k             ->s;G++                          )P("%\
d ",   (G)[  k->d]);             P("\n"             );}v x(s*k){k->                  s--;}g
(s*k    ){J k->s>0?k             ->d[--             k->s]:getchar()                  ;}A O(
A n)     {int j,c,l;             A e=M(             l=51);j                          =0;l--
;/**      */FILE*f;f             =fopen             (n,"r")                          ;if(f)
W((c       =getc(f))             !=EOF)             {if(j>l                          )l+=l;       
e=R(        e,l+1);e             [j++]=             c;}e[j]                         =0;J e        
;}F(         c,n)A c             ;{i Q=             0;for(;                       c[Q]&&c         
[(Q)          ]!=n;(             Q)++);             J Q[c]?                     Q:-1;}int
main           (i c,             A* H){             if(c<2)                    {X("insu\
ffi"            "ci"             "ent "             "argum"                   "ents.\nu"

"sage: ")Z(H[0])Z(" file-name\n")exit(1);}i u,t,X,Y,Z;A w=O(H[1]);A C="|~#^*()$:/{}`@\0";s k={0,4}
;I(&k);for(u=0;u<S(w);u++){t=F(C,w[u]);switch(t){U(0:X=g(&k);Y=g(&k);Z=255;if(X<2&&Y<2)Z/=Z;p(&k,Z
-(X&Y)))U                                                                                (1:case 2
:p(&k,t-1                                                                                ))U(3:u=~
-g(&k))U(                                                                                4:printf(
"%c",g(&k                                                                                )))U(5:p(
&k,X=g(&k                                                                                ));if(X<1
){W(w[++u                             /* By Conor O'Brien */                             ]&&F(C,w[
u])-6);})                                                                                U(7:g(&k)
)U(8:p(&k                                                                                ,X=g(&k))
;p(&k,X))                                                                                U(9:p(&k,
k.s))U(10                                                                                :Z=g(&k);
W(Z-->0){                                                                                X=k.d[0];
for(Y=1;Y<k.s;Y++)k.d[Y-1]=k.d[Y];k.d[--Y]=X;})U(11:Z=g(&k);W(Z-->0){X=k.d[k.s-1];for(Y=k.s-1;Y>=0
;--Y)k.d[Y+1]=k.d[Y];k.d[0]=X;})U(12:d(&k))U(13:Y=1;X=0;W(Y<256){X+=g(&k)*Y;Y+=Y;}p(&k,X))U(14:J 0
                                               )}}}                                               