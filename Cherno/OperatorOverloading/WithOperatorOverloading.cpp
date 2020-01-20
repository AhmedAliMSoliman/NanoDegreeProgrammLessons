VectorXY operator+(const VectorXY& arug) const 
    {
        return VectorXY(x + arug.x , y + arug.y) ; 
    }

VectorXY operator*(const VectorXY& arug) const 
    {
        return VectorXY(x * arug.x , y * arug.y) ; 
    }