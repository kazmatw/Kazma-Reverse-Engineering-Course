def convert_endian(input_file_path, output_file_path):
    with open(input_file_path, 'rb') as file:
        data = file.read()

    converted_data = bytearray()

    for i in range(0, len(data), 4):
        block = data[i:i+4]
        converted_data += block[::-1]

    with open(output_file_path, 'wb') as output_file:
        output_file.write(converted_data)

input_file_path = '/path/to/original.jpg'  
output_file_path = '/path/to/flag.jpg' 

convert_endian(input_file_path, output_file_path)


