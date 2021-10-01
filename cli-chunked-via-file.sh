
# value=$(<long_command_args.txt)

IFS=' ' read -r -a array <long_command_args.txt

len=${#array[@]}
step=17

for (( i=0; i<$len; i+=$step )); do $@ "${array[@]:$i:$i+$step}" ; done

# for element in "${array[@]}"
# do
#     lastexit=1
#     for i in 1 2 3 4 5
#     do
#         $@ "$element"
#         lastexit=$?
#         if [ $lastexit -eq 0 ]
#         then
#             break
#         fi
#     done
# done