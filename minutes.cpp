time=$(date -d "$1" +"%s")
echo $time
ourtime=$(date +"%s")
let "r=(time-ourtime)/60"
echo $ourtime
echo $r "min"
