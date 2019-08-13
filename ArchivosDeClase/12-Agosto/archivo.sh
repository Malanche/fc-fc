for var in ${@}
do
    tmp=$(echo "Soy ${var}!" | sed 's/a/e/')
    echo ${tmp}
done