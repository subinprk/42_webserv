# GCC support can be specified at major, minor, or micro version
# (e.g. 8, 8.2 or 8.2.0).
# See https://hub.docker.com/r/library/gcc/ for all supported GCC
# tags from Docker Hub.
# See https://docs.docker.com/samples/library/gcc/ for more on how to use this image

# Use the official Nginx image as the base image
FROM nginx

# Copy custom Nginx configuration file
COPY nginx.conf /etc/nginx/nginx.conf

# Copy HTML files into the Nginx document root
COPY html /usr/share/nginx/html/

# Expose port 80
EXPOSE 80
