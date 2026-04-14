```bash 
# install code runner for c 
code --install-extension formulahendry.code-runner

# run c without any extention 
gcc variables.c -o variables 
./variables 

# run c from terminal without creating extra output files through the extention call code-runner
gcc filename.c -o /tmp/filename && /tmp/filename
example: gcc variables.c -o /tmp/variables  && /tmp/variables

# you have to add the below in vs code settings.json to use above command 
"code-runner.executorMap": {                                                                                          
    "c": "cd $dir && gcc $fileName -o /tmp/$fileNameWithoutExt && /tmp/$fileNameWithoutExt"                           
} 