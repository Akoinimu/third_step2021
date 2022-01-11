@@ -0,0 +1,23 @@
require "narray"

science = NArray.to_na( [65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70] )
english = NArray.to_na( [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84] )

p "理科の平均点 = #{ science.mean }"
p "理科の標準偏差 = #{ science.stddev }"
p "理科の合計点 = #{ science.sum }"
p "英語の平均点 = #{ english.mean }"
p "英語の標準偏差 = #{ english.stddev }"
p "英語の合計点 = #{ english.sum }"

# 偏差値の算出
20.times do |i|
hensa_r = (science[i] - science.mean) / science.stddev * 10 + 50
hensa_e = (english[i] - english.mean) / english.stddev * 10 + 50
p "#{i+1}人目の理科の偏差値:#{hensa_r.round(2)}(点数:#{science[i]}) 英語の偏差値:#{hensa_e.round(2)}(点数:#{english[i]})"
end 

p "理科の得点|高い順"
p science.sort.reverse
p "英語の得点|高い順"
p english.sort.reverse
