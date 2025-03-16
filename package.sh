pandoc doc.md -f markdown -t html -o doc.html  --template=template.html --metadata title="王德宇_笃实41_2024013267_$(date +%Y-%m-%d)"
pandoc doc.md -f markdown -t pdf -o doc.pdf --pdf-engine=xelatex -V mainfont='JetBrains Mono' -V CJKmainfont='Noto Serif CJK SC'
zip -r  homework.zip CMakeLists.txt doc.md doc.pdf package.sh include/ src/ tests/ console_application/ gui_application/
cp homework.zip /mnt/c/Users/kvtoD/Downloads/王德宇_笃实41_2024013267.zip
