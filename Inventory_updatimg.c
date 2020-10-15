struct stores
{
    char name[20];
    float price;
    int quantity;
};
main()
{
    void update(struct stores *,float,int);
    float p_increment,value;
    float q_increment;

    struct stores item = {"BATA KA CHATA", 25.75, 12};
    struct stores *ptr = &item;

    printf("\nInput Increment values:");
    printf("\nprice increment and quantity increment\n");
    scanf("%f %d",&p_increment,&q_increment);

    update(&item,p_increment,q_increment);

    printf("\nUpdating values of item\n\n");
    printf("Name     : %s\n",ptr->name);
    printf("Price    : %f\n",ptr->price);
    printf("Quantity : %d\n",ptr->quantity);

    value = mu1(item);
    printf("\nValue of the item = %f\n", value);
}

void update(struct stores *product, floatp,int q)
{
    product->price += p;
    product->quantity +=q;
}
float mu1(struct stores *stock)
{
    return (stock->price * stock->quantity);
}