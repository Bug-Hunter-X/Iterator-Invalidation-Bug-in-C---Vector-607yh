std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) {
  if (vec[i] == 5) {
    vec.erase(vec.begin() + i); 
  } 
}