union u1 {
    float f;
    int i;
};

// ２で、共用体を基底として派生クラス・構造体・共用体を作ることや、クラス・構造体・共用体から派生して共用体を作ることはできない。
/* 
union u2 : public u1 {
    double d;
};
*/
