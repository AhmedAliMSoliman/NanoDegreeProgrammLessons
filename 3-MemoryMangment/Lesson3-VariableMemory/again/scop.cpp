bool MyLocalFunction(int myInit)
{
    bool isBelowThreshold = myInit < 42 ? true : false;
    return isBelowThreshold;  
}

int main()
{
    bool res = MyLocalFunction(23);
    return 0;
}