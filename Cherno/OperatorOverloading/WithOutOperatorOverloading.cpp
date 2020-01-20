    VectorXY Add(const VectorXY& arug) const 
    {
        return VectorXY(x + arug.x , y + arug.y) ; 
    }
    VectorXY Multiplay(const VectorXY& arug) const
    {
        return VectorXY(x * arug.x , y * arug.y) ; 
    }