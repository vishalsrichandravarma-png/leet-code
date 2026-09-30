int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1)
        return 0;

    int maxdiff = 0;
    int minprice = prices[0];

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minprice) {
            minprice = prices[i];
        } else {
            int currentdiff = prices[i] - minprice;
            if (currentdiff > maxdiff)
                maxdiff = currentdiff;
        }
    }
    return maxdiff;
}