std::vector<char> path;
// ...
for (std::vector<char>::const_iterator i = path.begin(); i != path.end(); ++i)
    std::cout << *i << ' ';
