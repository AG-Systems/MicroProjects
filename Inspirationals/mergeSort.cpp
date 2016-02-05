template <typename T>
void merge(vector<T>& array, vector<T>& array1, vector<T>& array2) {
    array.clear();

    int i, j, k;
    for( i = 0, j = 0, k = 0; i < array1.size() && j < array2.size(); k++){
        if(array1.at(i) <= array2.at(j)){
            array.push_back(array1.at(i));
            i++;
        }else if(array1.at(i) > array2.at(j)){
            array.push_back(array2.at(j));
            j++;
        }
        k++;
    }

    while(i < array1.size()){
        array.push_back(array1.at(i));
        i++;
    }

    while(j < array2.size()){
        array.push_back(array2.at(j));
        j++;
    }
}

template <typename T>
void merge_sort(std::vector<T>& array) {
    if (1 < array.size()) {
        std::vector<T> array1(array.begin(), array.begin() + array.size() / 2);
        merge_sort(array1);
        std::vector<T> array2(array.begin() + array.size() / 2, array.end());
        merge_sort(array2);
        merge(array, array1, array2);
    }
}
