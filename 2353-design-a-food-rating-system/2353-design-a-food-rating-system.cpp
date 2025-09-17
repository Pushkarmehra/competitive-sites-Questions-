class FoodRatings {
private:
    // Map from food name to its rating
    unordered_map<string, int> foodToRating;
    
    // Map from food name to its cuisine
    unordered_map<string, string> foodToCuisine;
    
    // Map from cuisine to a set of foods sorted by rating (desc) then name (asc)
    unordered_map<string, set<pair<int, string>, greater<pair<int, string>>>> cuisineToFoods;
    
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        
        for (int i = 0; i < n; i++) {
            string food = foods[i];
            string cuisine = cuisines[i];
            int rating = ratings[i];
            
            // Store food information
            foodToRating[food] = rating;
            foodToCuisine[food] = cuisine;
            
            // Add to cuisine set with negative rating for descending order
            // and food name for lexicographic order
            cuisineToFoods[cuisine].insert({rating, food});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = foodToCuisine[food];
        int oldRating = foodToRating[food];
        
        // Remove the old entry from the set
        cuisineToFoods[cuisine].erase({oldRating, food});
        
        // Update the rating
        foodToRating[food] = newRating;
        
        // Insert the new entry
        cuisineToFoods[cuisine].insert({newRating, food});
    }
    
    string highestRated(string cuisine) {
        // The set is ordered by rating (desc) then name (asc)
        // So the first element has the highest rating
        // If there's a tie in rating, lexicographically smaller name comes first
        auto it = cuisineToFoods[cuisine].begin();
        return it->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */