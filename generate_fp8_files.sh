#!/bin/bash
# 生成FP8激励文件脚本

MODELS=("vgg" "shufflenetv2" "squeezenet" "regnet" "resnet" "lenet" "efficientnet" "convnext")

# 确保MobileNet FP8文件存在
if [ ! -f "csrc/main_mobilenet_fp8.cpp" ]; then
  echo "错误: 源模板文件 csrc/main_mobilenet_fp8.cpp 不存在!"
  exit 1
fi

for model in "${MODELS[@]}"; do
  model_upper=$(echo $model | tr '[:lower:]' '[:upper:]')
  output_file="csrc/main_${model}_fp8.cpp"
  
  # 复制模板并替换模型名称
  cp "csrc/main_mobilenet_fp8.cpp" "$output_file"
  
  # 使用sed替换模型名称 (区分大小写)
  sed -i "s/MobileNet/${model_upper}/g" "$output_file"
  sed -i "s/mobilenet/${model}/g" "$output_file"
  sed -i "s/MOBILENET/${model_upper}/g" "$output_file"
  
  echo "生成文件: $output_file"
done

echo "所有FP8激励文件生成完成！" 