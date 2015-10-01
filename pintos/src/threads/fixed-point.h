#define frac (1 << 14)

int int_to_f(int i)
{
    return i * frac;
}

int f_to_int_zero(int i)
{
    return i/frac;
}

int f_to_int_near(int i)
{
    if(i>=0)
        return (i + frac/2)/frac;
    else
        return (i - frac/2)/frac;
}
int add_f(int x, int y)
{
    return x+y;
}
int sub_f(int x, int y)
{
    return x-y;
}
int add_i(int x, int y)
{
    return x + y * frac;
}
int sub_i(int x, int y)
{
    return x - y * frac;
}
int mul_f(int x, int y)
{
    return ((int64_t)x) * y / frac;
}
int mul_i(int x, int y)
{
    return x * y;
}
int div_f(int x, int y)
{
    return ((int64_t)x) * frac / y;
}
int div_i(int x, int y)
{
    return x / y;
}
