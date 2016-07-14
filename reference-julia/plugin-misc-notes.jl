N = 3;
x=[3 3.3 5];

# after z-score  standarization
x = [ -0.7108   -0.4327    1.1435 ];

# z-score  standarization

avg=mean(x);
stddev=sqrt(var(x));
y=(x-mean(x))/sqrt(var(x));
x=y;
maxxval = max(x);
minxval = min(x);


# step 1

Vt = (1.0 / ( N*(N-1))) * sum(x)^2; 
V = ((1.0 / (N-1)) * sum( x.*x )) - Vt;

# step 2

sigmav = sqrt(V);

# step 3

psins8 = ((105)/(32 * sqrt(pi) * sigmav^9 ));

# step 4

mi2k = 1;
k60 = -( 15.0 / sqrt(2*pi) );

g1 = ( (-2.0 * k60) / (mi2k * psins8 * N) )^(1.0/9.0);

# step 5

k6(x) = ( (1.0 / sqrt(2*pi)) * (x^6 - 15*x^4 + 45*x^2 - 15) * exp(-0.5 * x*x) );

t = (1.0 / (N*N * g1^7)) ;
s=0; stmp=0; argval = 0;
argtab=[];
k6tab=[];
exptab=[];
for i=1:N
    for j=1:N
        argval = ( ( x[i] - x[j] ) / g1 );
        stmp = k6( argval );
        s = s +  stmp;
    end
end

psi6g1 = t * s;

# step 6

mi2k = 1;
k40 = ( 3.0 / sqrt(2*pi) );

g2 = ( (-2.0 * k40) / (mi2k * psi6g1 * N) )^(1.0/7.0);

# step 7

k4(x) = ( (1.0 / sqrt(2*pi)) * (x^4 - 6*x^2 + 3) * exp(-0.5 * x*x) );

t = (1.0 / (N*N * g2^5)) ;
s=0;
for i=1:N
    for j=1:N
        s = s + k4( ( x[i] - x[j] ) / g2 );
    end
end
        
psi4g2 = t * s;

# step 8

rk = (1.0 / (2 * sqrt( pi )));
mi2k = 1;

h = (rk / (mi2k^2 * psi4g2 * N))^(1/5);

# h after normalization
h*nrmx

# h after z-score  standarization
h*stddev
