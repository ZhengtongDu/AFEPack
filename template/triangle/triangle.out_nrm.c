#include <assert.h>
#include <math.h>

void out_normal(const double * p, const double ** v, int i, double * n)
{
	double l;
	int ip2, ip1;
	assert(i >= 0 && i < 3);
	ip2 = (i+2)%3; ip1 = (i+1)%3;
	l = sqrt((v[ip2][0] - v[ip1][0])*(v[ip2][0] - v[ip1][0])
		+ (v[ip2][1] - v[ip1][1])*(v[ip2][1] - v[ip1][1]));
	n[0] = (v[ip2][1] - v[ip1][1])/l;
	n[1] = -(v[ip2][0] - v[ip1][0])/l;
}

