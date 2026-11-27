#include <iostream>
#include <vector>
#include <string>


void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    solution.clear();
    not_found.clear();
    int col = grid[0].size();
    int row = grid.size();
    for(int i=0; i<row; i++){
        std::string empty(col, '#');
        solution.push_back(empty);
    }


    for(int j=0; j<words.size(); j++){
        std::string tmp = words[j];
        bool found = false;
        int length = words[j].size();
        for(int k=0; k<row; k++){
            for(int l=0; l<=col-length; l++){
                bool match= true;
                for(int m=0; m<tmp.size(); m++){
                    if(tmp[m] != grid[k][l+m]){
                        match = false;
                    }
                }

                if(match){
                    for(int n=0; n<tmp.size(); n++){
                        solution[k][l+n] = tmp[n];
                    }
                    found = true;
                }
            }
        }

        for(int k=0; k<col; k++){
            for(int l=0; l<=row-length; l++){
                bool match= true;
                for(int m=0; m<tmp.size(); m++){
                    if(tmp[m] != grid[l+m][k]){
                        match = false;
                    }
                }

                if(match){
                    for(int n=0; n<tmp.size(); n++){
                        solution[l+n][k] = tmp[n];
                    }
                    found = true;
                }
            }
        }

        
        if(!found){
            not_found.push_back(tmp);
        }
    }
}


int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}