echo "gem 'devise'" >> Gemfile    # Or edit Gemfile and add line: gem 'devise'
bundle install                    # Fetch and install the gems
rails generate devise:install     # Creates config file, etc.
rails generate devise user        # Create model class, routes, etc.
rake db:migrate                   # Create user table
rails generate devise:views users # Creates (minimal) views
